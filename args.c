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
if (buffer == NULL || string == NULL)
{
perror("ERROR");
}
else 
{
buffer = _strcpy(buffer, string);
token = strtok(buffer, " ");
}
for (;token != NULL; i++)
{
token = strtok(NULL, " ");
}
free(buffer);
return(i);
}


char **argv(char *strings, int argc)
{
char *buffer = NULL, *token = NULL;
char **arr;
int i = 0, lenstrings = 0;

arr = malloc(sizeof(char *) * (argc + 1));

if (arr == NULL)
{
perror("ERROR");
}

if (strings == NULL)
{
free(arr);
perror("ERROR");
}
else 
{
lenstrings = strlen(strings);/**consultar*/
buffer = malloc(sizeof(char) * (lenstrings + 1));
}
if (buffer == NULL)
{
free(arr);
perror("ERROR");
}
buffer = strcpy(buffer, strings);
token = strtok(buffer, " ");

while (token != NULL)
{
    lenstrings = strlen(token);
    arr[i] = malloc(sizeof(char) * (lenstrings + 1));
if (arr[i] == NULL) 
{
free_array(arr, argc);
perror("ERROR");
}
arr[i] = strcpy(arr[i], token);
token = strtok(NULL, " ");
i++;
}
arr[i] = NULL;
free(buffer);
free(strings);
return(arr);
}

