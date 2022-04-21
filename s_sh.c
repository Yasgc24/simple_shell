#include "shell.h"

/**
 * main - execute a shell
 *
 * Return: 0 to success
 */

int main(void)
{
char *line = NULL;
size_t len = 0;
int comand;
int argcs = 0;

while (1)
{
printf("$ ");
comand = getline(&line, &len, stdin);
argcs = argc(line);
comand = comand;
printf("argc: %d\n", argcs);

}
return(0);
}
