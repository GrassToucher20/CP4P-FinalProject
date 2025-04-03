#include "converting.h"

void converting1(void)
{
	// Variable for the result of the conversion
	int i = 0;

	// Hold the user input buffer
	char buffer[9] = {0};

	// Prompt the user for input
	printf("Enter a number no longer than %d digits: ", sizeof(buffer) - 1);
	scanf("%8[^\n]", buffer);

	// If the string is empty, print a warning, otherwise convert to an int
	if (strlen(buffer) == 0)
	{
		printf("You didn't enter anything.\n");
	}
	else
	{
		// Convert the string to an int and output the result
		i = atoi(buffer);
		printf("The value entered is %d. Its double is %d.\n", i, i * 2);
	}
}

void converting2(void)
{
	// Variable for the result of the conversion
	double i = 0;

	// Hold the user input buffer
	char buffer[9] = {0};

	// Prompt the user for input
	printf("Enter a number no longer than %d digits: ", sizeof(buffer) - 1);
	scanf("%8[^\n]", buffer);

	// If the string is empty, print a warning, otherwise convert to an int
	if (buffer[0] == '\0')
	{
		printf("You didn't enter anything.\n");
	}
	else
	{
		// Convert the string to an int and output the result
		i = atof(buffer);
		printf("The value entered is %lf. Its double is %lf.\n", i, i * 2);
	}
}
