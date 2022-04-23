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
	int command = 0, arg_counter;
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
		arg_counter = argc(line);
		tokens = argv(line, arg_counter);
		printf("argv: %s", tokens[0]);
		/*path = add_path(tokens[0]);*/

		if (new_proccess(path, tokens, environ) == -1)
		{
			free(path);
			free_double_pointer(tokens, arg_counter);
			free(line);
		}
		free_double_pointer(tokens, arg_counter);
	}
	return (0);
}
