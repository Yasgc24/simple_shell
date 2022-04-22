#include "shell.h"

/**
 * free_array - function that frees memory of tokens
 * @array: pointer to pointer to be freed
 */

void free_array(char **array)
{
	int i = 0;

	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
