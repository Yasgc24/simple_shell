#include "shell.h"

/**
 * tokenizer - take the line and splith it into segments
 * @string: string to tokenizer
 * @delim: delimiter
 * Return: A pointer to array
 */

char **tokenizer(char *string, char *delim)
{
	int counter = 0;
	char **div_w = malloc(sizeof(char *) * (counter + 1));
	int i = 0;

	counter = argc(string);
	div_w[0] = strtok(string, delim);
	if (div_w == NULL || div_w[0] == NULL)
	{
		perror("ERROR");
		free(div_w[0]);
		free(div_w);
		return (NULL);
	}
	i = 1;
	while (i < counter)
	{
		i++;
		div_w[i] = strtok(NULL, delim);
	}
	return (div_w);
}
