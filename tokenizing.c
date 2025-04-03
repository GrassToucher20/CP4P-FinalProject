#include "tokenizing.h"
#include "common.h"

void tokenizing1(void)
{
    // Hold the input string
    char str[STRING_MAX + 1] = {0};
    int i;

    // Prompt the user for a string
    printf("Enter words separated by spaces by spaces: ");
    scanf("%50[^\n]", str);

    // If the string is empty, warn the user
    if (strlen(str) == 0)
    {
        printf("You didn't enter anything!\n");
    }
    else
    {
        // Store delimiter, and token
        char *delim = " ";
        char *token = strtok(str, delim);

        // Print out all of the tokens
        for (i = 0; token != NULL; i++)
        {
            printf("Token #%d: %s\n", i + 1, token);
            token = strtok(NULL, delim);
        }
    }
}

void tokenizing2(void)
{
    char input[STRING_MAX] = {0};
    char *token;

    // Prompt the user
    printf("Enter a phrase: ");
    fgets(input, STRING_MAX, stdin);

    // Remove newline character from fgets if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    // Tokenize using space as delimiter
    token = strtok(input, " ");

    printf("Tokens:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}