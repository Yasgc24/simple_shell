#include "shell.h"

/**
 * prompt - executes interactive prompt
 * @interactive_str: String interactive
 * @line: line
 * Return: 0 to success.
 */
void *prompt(char *interactive_str, char *line)
{
	char **arg_var = NULL;
	int len_chars = 0, arg_count = 0;
	size_t line_size = 0;

	while (EOF)
	{
		print_line(interactive_str);

		fflush(stdin);

		len_chars = getline(&line, &line_size, stdin);

		if (line == NULL)
			perror("Error");

		if (len_chars == EOF)
		{
			free(line);
			fflush(stdin);
			exit(127);
		}

		line = clean_line(line);

		arg_count = argc(line);

		arg_var = argv(line, arg_count);
		if (arg_count != 0)
		{
			arg_var[0] = create_path_extension(arg_var[0], arg_var, arg_count);
			printf("%s\n", argument_variable[0]);
		}
	}
}
