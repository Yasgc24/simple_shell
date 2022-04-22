#include "shell.h"

/*
 *
 *
 */

char *add_path(char *command)
{
	int i, j;
	char *path = NULL, *temp = NULL;
	char **token = NULL;

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
		
		j = 0;
		while (token[j])
		{
		       	temp = _strcpy(temp, token[1]);
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
