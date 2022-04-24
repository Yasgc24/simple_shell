#include "shell.h"

/**
 * main - executes interactive prompt
 *
 * Return: 0 to success.
 */
int main(void)
{
	char *new_line = NULL;
	
	signal(SIGINT, ctrl_c);
	if (isatty(STDIN_FILENO) == 1)
	{
		prompti("$ ", new_line);
	}

	else
	{
		promptni(new_line);
	}
	return (0);
}
