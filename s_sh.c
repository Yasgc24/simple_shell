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
	int command = 0;
	char **tokens = NULL;
	char *path = NULL;

	signal(SIGINT, ctrl_c);

	while (1)
	{
		write(STDOUT_FILENO, "$ ", 2);
		command = (getline(&line, &len, stdin));
		if (command == EOF)
		{
			free(line);
			return (0);
		}
		tokens = tokenizer(line, DELIM);
		path = add_path(tokens[0]);

		if (new_proccess(path, tokens, environ) == -1)
		{
			free(path);
			free(tokens);
			free(line);
		}
		free(tokens);
	}
	return (0);
}
