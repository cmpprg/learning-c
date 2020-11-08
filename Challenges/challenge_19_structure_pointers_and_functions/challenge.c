/*
Author: Ryan Camp
Purpose: Challenge 19 dealing with pointers as structures and in structures 
Date: 
*/

/*
Notes:
    - create program that creates a structure pointer and passes it to a function
        -create a structure named item with the following members
            - itemName - pointer
            - quantity - int
            - price - float
            - amount - float (stores quantity * price)

    - create a function named readItem that takes a structure pointer of type item as a param
        - this function should read in (from the user) a product name, price, and quantity
        e the contents read in should be stored in the passed in structure to the function

    - create a functin named print item that takes as a param a structure of type item
        - function prints the contents of the param

    - the main function should declare an item and a pointer to the item.
        - you will need to allocate memory for the itemName pointer
        - the item pointer should be passed into both the read and print item functions.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//declare struct
struct item {
    char * itemName;
    int quantity;
    float price;
    float amount;
};

//declare functions
void readItem(struct item *Ptr);
void printItem(const struct item *Ptr);

//start main program
int main(void){
    //instantiate userItem and point itemPtr to it.
    struct item userItem;
    struct item * itemPtr = &userItem;

    //allocate memory for itemName
    itemPtr->itemName = (char *)calloc(30, sizeof(char));

    //check for null value in pointer
    if(!itemPtr)
        exit(-1);

    printItem(itemPtr);
    readItem(itemPtr);
    printItem(itemPtr);

    free(itemPtr->itemName);
    return 0;
}

//define functions
/*
Name: Read Item
Purpose: read user input and populate members of struct item through pointer.
*/
void readItem(struct item *ptr){
    printf("\nItem information:\n");

    printf("Name: ");
    fgets(ptr->itemName, 29, stdin);
    ptr->itemName[strlen(ptr->itemName) - 1] = '\0';

    printf("Quantity: ");
    scanf("%i", &ptr->quantity);

    printf("Price: ");
    scanf("%f", &ptr->price);
}
/*
Name: Print Item
Purpose: to print each member of the struct item pointer passed to it.
*/
void printItem(const struct item *ptr){
    printf("\nItem Name is %s\n", ptr->itemName);
    printf("Quantity is %i\n", ptr->quantity);
    printf("Price is $%.2f\n", ptr->price);
    printf("Amount is $%.2f\n", ptr->quantity * ptr->price);
}
