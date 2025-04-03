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
    // Input from the user
    int choice;

    // Continue giving the user a choice until they exit the program
    do
    {
        // Display choices
        printf("String manipulation program\n");
        printf("1. Indexing strings\n");
        printf("2. Concatenate strings\n");
        printf("3. Convert string to int\n");
        printf("4. Tokenizing words\n");
        printf("5. Measure string\n");
        printf("6. Compare strings\n");
        printf("7. Convert string to double\n");
        printf("8. Tokenize phrase\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

        // read the choice from input
        scanf("%d", &choice);
        clearBuffer();

        // perform the action the user wants
        switch (choice)
        {
        case 1:
            fundamentals1();
            break;
        case 2:
            manipulating1();
            break;
        case 3:
            converting1();
            break;
        case 4: 
            tokenizing1();
            break;
        case 5:
            fundamentals2();
            break;
        case 6:
            manipulating2();
            break;
        case 7:
            converting2();
            break;
        case 8:
            tokenizing2();
            break;
        case 0:
            printf("exiting program. goodbye!\n");
            break;
        default:
            printf("Invalid choice. please try again.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}