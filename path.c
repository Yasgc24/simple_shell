#include "shell.h"

/*
 *
 *
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

	i = 0;
	while (environ[i])
	{
		if (_strcmp(environ[i], "PATH") == 0)
			{
			       	path = _strcpy(path, environ[i]);
				break;
			}
	i++;
				if (path == NULL)
				{	
					return (NULL);
				}
		token = tokenizer(path, "=:");
		
		j = 1;
		while (token[j])
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
			j++;
	}
	free(path);
	free(token);
	return (NULL);
}
