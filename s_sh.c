#include "shell.h"

/**
 *
 *
 */

int main(void)
{
char *line = NULL;
size_t len = 0;
int comand;

while (1)
{
printf("$ ");
comand = getline(&line, &len, stdin);
tokenizer(*line);
}
return(0);
}
