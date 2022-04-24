#include "shell.h"

/**
* clean_line - Cleans line
* @line: line of command to be cleaned from memory
* Return: ret_line
*/

char *clean_line(char *line)
{
	int len_line = 0;
	char *ret_line = NULL;

	len_line = _strlen(line);
	ret_line = (char *)malloc(sizeof(char) * len_line);
	if (ret_line == NULL)
	{
		perror("Error");
	}

	ret_line = _strcpy(ret_line, line);
	ret_line[len_line - 1] = '\0';

	return (ret_line);
}
