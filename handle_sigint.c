#include "shell.h"

/**
 *
 *
 */

void ctrl_c(int n)
{
	(void)n;
	write(STDOUT_FILENO, "\n$ ", 3);
}
