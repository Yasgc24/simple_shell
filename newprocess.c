#include "shell.h"
#include <sys/wait.h>

/**
 * new_proccess - Function that creates
 * a child proccess and executes a command
 * @path: Path to command
 * @tokens: pointer to array of tokens
 *
 * Return: 0 to success
 */
int new_proccess(char *path, char **tokens, char **environ)
{
	pid_t pidc = 0;
	int status = 0;

	pidc = fork();
	if (pidc < 0)
	{
		free(path);
		return (1);
	}
	if (pidc == 0)
	{
		if (execve(path, tokens, environ) == -1)
		{
			return (1);
		}
	}
	else
	{
		wait(&status);
		free(path);
		free(tokens);
	}
	return (0);
}
