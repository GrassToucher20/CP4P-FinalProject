#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "./manipulating.h"
#include "./tokenizing.h"
#include "./converting.h"
#include "./fundamentals.h"
#include <stdio.h>
#include "common.h"

int main()
{
    fundamentals2();

    // // input from the user
    // int choice;

    // // continue giving the user a choice until they exit the program
    // do
    // {
    //     // display choices
    //     printf("\nstring manipulation program\n");
    //     printf("1. string to integer conversion\n");
    //     printf("2. tokenize string\n");
    //     printf("3. string length demo\n");
    //     printf("4. string concatenation\n");
    //     printf("0. exit\n");
    //     printf("enter your choice: ");

    //     // read the choice from input
    //     scanf("%d", &choice);
    //     clearBuffer();

    //     // perform the action the user wants
    //     switch (choice)
    //     {
    //     case 1:
    //         converting1();
    //         break;
    //     case 2:
    //         tokenizing1();
    //         break;
    //     case 3:
    //         fundamentals1();
    //         break;
    //     case 4:
    //         manipulating1();
    //         break;
    //     case 0:
    //         printf("exiting program. goodbye!\n");
    //         break;
    //     default:
    //         printf("invalid choice. please try again.\n");
    //         break;
    //     }
    // } while (choice != 0);

    // return 0;
}