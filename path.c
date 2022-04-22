#include "shell.h"

/**
 * add_path - Searches the path of the command
 * @command: command
 * Return: path
 */

char *add_path(char *command)
{
	int i, j = 0;
	char *path = NULL, *temp = NULL;
	char **token = NULL;

	if (access(command, X_OK) == 0)
	{
		return (command);
	}
	for (i = 0; environ[i]; i++)
	{
		if (_strcmp(environ[i], "PATH") == 0)
		{
			path = _strcpy(path, environ[i]);
			break;
		}
		if (path == NULL)
		{
			return (NULL);
		}
		token = tokenizer(path, "=:");
		for (j = 1; token[j]; j++)
		{
			temp = _strcpy(temp, token[j]);
			temp = _strcat(temp, "/");
			temp = _strcat(temp, command);
		}

		if (access(temp, X_OK) == 0)
		{
			free(path);
			free(token);
			return (temp);
		}
		free(temp);
	}
	free(path);
	free(token);
	return (NULL);
}
