/*
Author: Ryan Camp
Purpose: Challenge 18 declaring and initializing structures
Date: 11-7-2020
*/

/*
Notes:
    - Write a program that declares a structure and prints out it's content
        - create employee structure with 3 members
            - name (char array)
            - hireDate (int)
            - salary (float)

        - declare and initialize an instance of an employee
        - read in a second employee from the console and store it in a struct of type employee
        - print out the contents of each employee
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee{
    char name[40];
    int hireDate;
    float salary;
};

int main() {

    char temp[40];

    struct employee emp1 = {"Ryan Camp", 3301988, 55.50F };

    printf("Employee 1's Name: %s, Hire Date: %i, Salary: %.2f\n", emp1.name, emp1.hireDate, emp1.salary);

    //user input for name
    printf("Please enter the employee name: ");
    fgets(temp, 39, stdin);
    temp[strlen(temp) - 1] = '\0';
    strcpy(emp1.name, temp);

    //user input for hireDate
    printf("Please enter the date of hire: ");
    fgets(temp, 39, stdin);
    emp1.hireDate = atoi(temp);

    //user input for salary
    printf("Please enter the salary: ");
    fgets(temp, 39, stdin);
    emp1.salary = (float)atof(temp); 

    printf("Employee 1's Name: %s, Hire Date: %i, Salary: %.2f\n", emp1.name, emp1.hireDate, emp1.salary);
    return 0;
}
