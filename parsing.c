#include "shell.h"

/*
*
*
*/

char *add_path(char **argv, int argc, char *command)
{
int len, i;
char *path = NULL; *token = NULL, *temp = NULL;

if (command[0] != '/')
{
for (i = 0; environ[i];, i++)
if (_strcmp(environ[i], "PATH") != NULL)
{
len = _strlen(environ[i]);
path = malloc(sizeof(char) * len + 1);
if (path == NULL)
{
return(NULL);
}
path = _strcpy(path, environ[i]);
}
token = tok_path(path, token);
while (token != NULL)
{
len = _strlen(token);
temp = malloc(sizeof(char) * (len + _strlen(command) + 2);
if (temp == NULL)
{
free(path);
free_arr(argv,argc);
perror("ERROR");
}
temp = access(token, F_OK);
if (temp != NULL)
return (temp);
token = strtok(NULL, ":");
}
free(path);
return (command);
}
return (command);
}
