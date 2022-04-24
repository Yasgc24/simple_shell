#include "shell.h"

/**
 * ctrl_c - entering ctrl+c does not exit
 * @n: int
 * Return: void
 */

void ctrl_c(int n)
{
	(void)n;
	write(STDOUT_FILENO, "\n$ ", 3);
}
