#include "shell.h"

/*
 *
 *
 */

char *add_path(char **command)
{
	int i;
	char *path = NULL, *temp = NULL, **token = NULL;

		for (i = 0; environ[i]; i++)
			if (_strcmp(environ[i], "PATH") == 0)
			{
			       	path = _strcpy(path, environ[i]);
				break;
				if (path == NULL)
				{	
					return (NULL);
				}
			}
		token = tokenizer(path, "=:");
		while (token != NULL)
		{
		       	temp = _strcpy(temp, token[1]);
                        temp = _strcat(temp, "/");
                        temp = _strcat(temp,command[0]);

			if (temp == NULL)
			{
				free(path);
				perror("ERROR");
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
