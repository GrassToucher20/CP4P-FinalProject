#include "manipulating.h"

void manipulating(void)
{
	/* Version 1 */
	printf("*** Start of Concatenating Strings Demo ***\n");

	// Store the input from the user
	char input[STR_SIZE + 1] = { 0 };
	char fmt[12];

	// Prompt the user for string
	printf("Please enter a string no longer than %d chars: ", STR_SIZE - 3);
	sprintf(fmt, "%%%d[^\n]", STR_SIZE - 4);
	scanf(fmt, input);

	// If the user didn't enter anything, display a message, otherwise concatenate the string
	if (strlen(input) == 0)
	{
		printf("You didn't enter anything.\n");
	}
	else
	{
		// Concatenate 123 to the end of the string
		strcat(input, "123");
		printf("The result is %s.\n", input);
	}

	printf("*** End of Concatenating Strings Demo ***\n\n");
}
