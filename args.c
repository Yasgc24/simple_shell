#include "shell.h"

/**
 * argc - Count the number of arguments in a string
 * @string: string
 * Return: number of arguments separate with delimiter
 */
int argc(char *string)
{
	char *tokenizer = NULL, *copy_str = NULL;
    int len_str = 0;
    if (string == NULL)
        perror("Error");

    len_str = _strlen(string);
    copy_str = malloc(len_str + 1);

    if (copy_str == NULL)
        perror("Error");
    
    copy_str = _strcpy(copy_str, string);

    tokenizer = strtok(copy_str, DELIM);
    len_str = 0;

    while (tokenizer != NULL)
    {
        len_str++;
        tokenizer = strtok(NULL, DELIM);
    }
    free(copy_str);
    return (len_str);
}
