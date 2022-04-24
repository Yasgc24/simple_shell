#include "shell.h"

/**
 * argv - splits a string and creates an array of strings
 * @line: line
 * @argument_count: count arguments
 * Return: the numbers of strings separate with DELIM
 */

char **argv(char *line, int argument_count)
{
	char **rtn_newline = NULL, *tmp_line = NULL, *tokenizer = NULL;
	int len_line = 0, i = 0;

	rtn_newline = malloc(sizeof(char *) * (argument_count + 1));
	if (rtn_newline == NULL)
	{
		perror("Error");
	}

	len_line = _strlen(line);
	tmp_line = malloc(sizeof(char) * (len_line + 1));
	if (tmp_line == NULL)
	{
		free(rtn_newline);
		perror("Error");
	}

	tmp_line = _strcpy(tmp_line, line);

	tokenizer = strtok(tmp_line, DELIM);
	len_line = 0;
	while (tokenizer != NULL)
	{
		len_line = _strlen(tokenizer);
		rtn_newline[i] = malloc(sizeof(char) * (len_line + 1));
		if (rtn_newline[i] == NULL)
		{
			free_double_pointer(rtn_newline, argument_count);
			perror("Error");
		}

		rtn_newline[i] = _strcpy(rtn_newline[i], tokenizer);
		tokenizer = strtok(NULL, DELIM);
		i++;
	}
	rtn_newline[i] = NULL;
	free(line);
	free(tmp_line);

	return (rtn_newline);
}


/**
 * free_double_pointer - frees a 2 dimensional grid
 * @argv: grid created. (array of pointers)
 * @argc: rows (integer)
 *
 * Return: void. Frees memory
 */
void free_double_pointer(char **argv, int argc)
{
	int i;

	i = 0;
	while (i < argc)
	{
		free(*(argv + i));
		i++;
	}
	free(argv);
}
