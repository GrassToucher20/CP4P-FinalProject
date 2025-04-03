#include "fundamentals.h"

void fundamentals()
{
	// Hold the format for the input
	char fmt[12];

	// Stores the string from the user and the length of the string
	char str[MAX_STRING + 1] = { 0 };
	int length;

	// Prompt the user for a string
	printf("Enter a string no longer than %d chars long: ", MAX_STRING);
	sprintf(fmt, "%%%d[^\n]", MAX_STRING);
	scanf(fmt, str);

	// Calculate string length
	length = strlen(str);

	// Print new line
	printf("\n");
	
	// If the length is 0, print a message, otherwise perform indexing operations
	if (length == 0)
	{
		printf("The string is too short. Try again!");
	}
	else
	{
		printf("The string is %s\n", str);
		printf("The first character is %c\n", str[0]);
		printf("The last character is %c\n", str[length - 1]);
	}
}
