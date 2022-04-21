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
int command;

while (1)
{
write(STDOUT_FILENO, "$ ", 2);
fflush(stdin);
command = getline(&line, &len, stdin);

if (command == -1)
{
    free(line);
    exit(127);
}


}
return(0);
}
