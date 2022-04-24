#include "shell.h"

/**
 * main - executes interactive prompt
 *
 * Return: 0 to success.
 */
int main(void)
{
	char *new_line = NULL;

	while (isatty(STDIN_FILENO) == 1)
	{
		prompt("$ ", new_line);
	}
	return (0);
}
