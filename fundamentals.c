#include "fundamentals.h"
#include "common.h"

void fundamentals1()
{
	// Hold the format for the input
	char fmt[12];

	// Stores the string from the user and the length of the string
	char str[MAX_STRING + 1] = {0};
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

void fundamentals2()
{
	// Two buffers for user input
	char buffer1[MAX_STRING + 1] = { 0};
	char buffer2[MAX_STRING + 1] = { 0 };

	// Prompt the user for the first buffer
	printf("Enter a string no longer than %d chars long: ", MAX_STRING);
	scanf("%50[^\n]", buffer1);
	clearBuffer();

	// Prompt the usre for the second buffer
	printf("Enter a string no longer than %d chars long: ", MAX_STRING);
	scanf("%50[^\n]", buffer2);
	clearBuffer();

	// Check if the string is empty
	if(buffer1[0] == '\0' || buffer2[0] == '\0')
	{
		// Print a message if the string is empty
		printf("One of the strings is empty. Try again!\n");
	}
	else
	{
		// Copy the second buffer to the first buffer
		strcpy(buffer1, buffer2);

		// Print the first buffer
		printf("The result is %s\nLength: %d\n", buffer1, strlen(buffer1));
	}
}
