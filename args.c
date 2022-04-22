#include "shell.h"

/**
 * argc - Count the number of arguments in a string
 * @string: string
 * Return: number of arguments separate with delimiter
 */
int argc(char *string)
{
	char *buffer = NULL, *token = NULL;
	int i = 0;

	buffer = malloc((_strlen(string) + 1));
	if (buffer == NULL || string == NULL)
	{
		perror("ERROR");
	}
	else
	{
		buffer = _strcpy(buffer, string);
		token = strtok(buffer, DELIM);
	}
	for (; token != NULL; i++)
	{
		token = strtok(NULL, DELIM);
	}
	free(buffer);
	return (i);
}
