#include "shell.h"

/**
 *
 *
 */

char **tokenizer(char *line)
{    
char delim[] = " ";
char token = strtok(line, delim);
int i = 0;
int argc = 0;
char **buff = malloc(sizeof(char *) * (argc + 1));

if (token == " ")
{
return(NULL);
}
else
{
while (token != NULL)
{
token = strtok(NULL, delim);
printf("%s\n", token);
i++;
}
return(0);
}
