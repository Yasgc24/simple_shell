#include "shell.h"

/**
 * prompti - executes interactive prompt
 * @interactive_str: String interactive
 * @line: line
 * Return: 0 to success.
 */
void *prompti(char *interactive_str, char *line)
{
	char **arg_var = NULL;
	int len_chars = 0, arg_count = 0, bash_count = 1;
	size_t line_size = 0;

	while (EOF)
	{
		c_print(interactive_str);

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
			exe_command(arg_var, arg_count, bash_count);
		}
		else
		{
			free_double_pointer(arg_var, arg_count);
		}
		bash_count++;
	}
	free(line);
}

/**
 * promptni - if insert code in mode interactive execute
 * @line: line
 * Return: void
 **/

void promptni(char *line)
{
	int arg_count = 0, bash_count = 1;
	char **arg_var = NULL;
	size_t line_size = 0;

	while (getline(&line, &line_size, stdin) != EOF)
	{

		if (line == NULL)
			perror("Error");

		line = clean_line(line);
		argt_count = argc(line);
		arg_var = argv(line, arg_count);

		if (arg_count != 0)
		{
			arg_var[0] = create_path_extension(arg_var[0], arg_var, arg_count);
			exe_command(arg_var, arg_count, bash_count);
		}
		else
			free_double_pointer(arg_var, arg_count);
	}
	free(NULL);
	exit(0);
}
