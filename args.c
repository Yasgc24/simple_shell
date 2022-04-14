#include "shell.h"

/**
 *
 *
 */
int argc(char *string)
{
char *buffer = NULL, *token = NULL;
int i = 0;

buffer = malloc((_strlen(string) + 1));
if (buff == NULL || string == NULL)
{
perror("ERROR");
}
else 
{
buffer = _strcopy(buffer, string);
token = strtok(buffer, " ");
}
if (token != NULL)
{
i++;
token = strtok(NULL, " ");
}
free(buffer);
return(i);
}

