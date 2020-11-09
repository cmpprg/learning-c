/*
Author: Ryan Camp
Purpose: Overview of File Input and Output in C language
Date: 11-7-2020
*/

/*
Notes:
    - up until this point, all data that our program accesses is via memory
        - scope and variety of applications you can create is limited

    - All serious business apps require more data than would fit into main memory

    - <stdio.h> has most of what you need to read and write
        - typically using the hard drive for persistent storage
        - however, the library will work with virtually any external storage, usb, floppy, etc...

    - without persistence, everything goes away when program ends
        - called volitile memory

    - non-volitile memory will persist when program ends or computer is shut off

    - C views file as a continuopus sequence of bytes
        - each byte can be read individually
        - corresponds to the file structure in UNIX environment

    - File has BOF(beginning of file) and EOF(end of file), and a current position
        - current position is where any action performed will take place.

    - There are two ways of writing data to a stream that represents a file
        -text
        -binary

    - text data is written as a sequence of characters organized as lines(each line ends with a newline)
    
    - binary data is written as a series of bytes exactly as they appear in memory
        - image data, music encoding - not readable

    - You need to understand the format of a file in order to read it properly
        - a sequence of 12 bytes in a binary file could be 12 chars, 12 8-bit signed ints, 12 8bit unsigned ints, etc..
        - in binary mode, each and every byte of a file is accessible.

    - STREAMS:
    
        - C programs automatically open three files on your behalf
            - standard input - normal input device(default keyboard)
            - standard output - usually your display
            - standard error - usually your display

        - standard input is the file that is read by getchar() or scanf()

        - standard output is used by putchar(), puts(), and printf()
            - redirection causes other files to be recognized as the standard input or output

        - the purpose of the standard error output file is to provide a logically distinct place to send error messages

        - a stream is an abstract representation of any external source or destination for data
            - the keyboard, the command line, files, are all streams

            - you use the same C functions to read and write to any device that is mapped to a stream
*/
