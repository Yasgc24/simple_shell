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
char **tokens = NULL;
char *path = NULL;
while (1)
{
write(STDOUT_FILENO, "$ ", 2);
fflush(stdin);
command = getline(&line, &len, stdin);

if (command == EOF)
{
    free(line);
    exit(127);
}
path = _strcpy(path, tokens[0]);
tokens = malloc(sizeof(char *) * (command + 1));
tokens = tokenizer(line, DELIM);

path = add_path(tokens);
if (new_proccess(path, tokens, environ) == -1)
{
	free(tokens);
	perror("ERROR");
}
exit(EXIT_SUCCESS);
}
}
