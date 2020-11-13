/*
Author: Ryan Camp
Purpose: Challenge problem for enums
Date: 10-23-2020
*/

#include <stdio.h>

int main()
{   
    //define company enums
    enum company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
    
    //declare enum variables
    enum company company1 = XEROX;
    enum company company2 = GOOGLE;
    enum company company3 = EBAY;
    
    //display output of three variables seperated by newlines
    printf("- %d\n- %d\n- %d\n", company1, company2, company3);

    return 0;
}
