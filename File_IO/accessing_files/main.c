/*
Author: Ryan Camp
Purpose: To learn about accessing files in C language
Date: 11-8-2020
*/

/*
Notes:
    - files on disk have a name nd the rules for naming files are determined by your OS
        - you may have to adjust the names depending on what OS your program is running

    - a program references a file through a file pointer (or stream pointer, since it works on more that a file)
        - you associate a file pointer with a file programmatically when the program is run
        - pointers can be reused to point to differenct files on different occasions

    - a file pointer points to a struct of type FILE that represents a stream
        - contains information about the file
            - whether you want to read or write or update the file
            - the address of the buffer in memory to be used for data
            - a pointer to the current position in the file for the next operation
        - the above is all set via input/output file operations.

    - if you want to use several files simultaneasly in a program, you need a separate file pointer for each file
        - there is a limit to the number of files you can have open at one time
            - defined as FOPEN_MAX in stdio.h

    - To read or write to a file is an expensive operation because it is happending on the harddrive
        - can slow and bog down your program

    - OPENING A FILE
        - fopen() input external file, output pointer to be used internally for read and write operations
        - defined in <stdio.h>.

        FILE *fopen(const char * restrict name, const char * restrict mode);

            - first arg to function is a pointer to a string that is the name of the external file.
                - specify explicitly or use a char pointer that contains the address
                - you can obtain the file name through the command line, input from user, or defined as a constant in your program

            - second arg is file mode
                -specifies what you want to do with file
                - char string between double quotes

            - assumig success in openening file, return in a pointer of type FILE* that you can use to reference the file in further IO operations

            - if the file cannot be opened for some reason, returns NULL

    - FILE MODES:
        - "w" - open a text file for write. If the file exists, its current contents are discarded
        - "a" - open a text file for append operations. write to end of file
        - "r" - open for read
        - "w+" - open a text file for update(read / write), first truncating the file to zero length if it exists or creating the file if it does not
        - "a+" - open a text file for update(read / write), append to the EOF, or create if it does not exist
        - "r+" - open a text file for update(read / write)

        
        FILE *pfile = NULL;
        char *filename = "myfile.txt";
        pfile = fopen(filename, "w");

        if(!pfile){
            ...error handling...
        }

    - if you only provide the file name without any path specification, the file is assumed to be in the current direcotry
        - you can also specify a string that is the full path and name for the file

    - on opening a file for wrtiing, the file length is truncated to zero and the position will be at the beginning of any existing data
        - any datas that was previously written to the file will be lost and overwritten by any wrtie operations.

    - if you want to add to an existing text file rather than overwritting it
        - specify "a"
        - all write operations will append to the EOF

    - if you want to read and not write
        - specify "r"
        - positions the file to the beginning of the data
        - if you try to open a read file that does not exist it will return NULL.

    - RENAMING A FILE:
        - rename(const char * oldname, const char * newname);
            - returns int type
                - 0 is good in this case, others... not so good
        - the file must not be open when you try to rename or it will fail


        int ret;
        char oldname[] = "file.txt";
        char newname[] = "newfile.txt";

        ret = rename(oldname, newname);
	
        if(ret == 0) {
            printf("File renamed successfully");
        } else {
            printf("Error: unable to rename the file");
        }


    - When you are done with the file
        - call fclose().

            - input file pointer
            - returns int type
                - 0 = sucess
                - -1 = fail / EOF = -1 / EOF = fail
        - fclose() will close the connection between the pointer and the external file
            - you can no longer use this to read or write too, you will need to reopen the connection

    - DELETE a FILE
        - you can delete a file by invoking the remove() function

        - remove("myFile.txt");

        - will delete the file that has the name myFile.txt from the current dir

        - cannot be open at the time

        - Always double check with operations that delete files
            - you could wreck your system if you don't
        
*/
