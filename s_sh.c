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
getline(&line, &len, stdin);
}
return(0);
}
