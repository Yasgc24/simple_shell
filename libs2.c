#include "shell.h"
/**
 * _atoi - Convert strintg to integer
 * @s: pointer to the string to be iterated
 *
 * Return: the number and sign of an array, 0 if no number.
 */
int _atoi(char *s)
{
	int i, sign = 0, num = 0, out = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 - (s[i] - '0');
			out = 1;
		}
		else if (out == 1)
		{
			break;
		}
	}
	if ((sign - 1) % 2 != 0)
	{
		num = num * -1;
	}
	return (num);
}

/**
 * _puts - print a array charecters
 * @str: Input data array
 *
 **/

void _puts(char *str)
{
	int i, count;

	count = _strlen(str);
	for (i = 0; i < count; i++)
		_putchar(str[i]);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/

int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
* clean_line - Cleans line
* @line: line of command to be cleaned from memory
* Return: ret_line
*/

char *clean_line(char *line)
{
	int len_line = 0;
	char *ret_line = NULL;

	len_line = _strlen(line);
	ret_line = (char *)malloc(sizeof(char) * len_line);
	if (ret_line == NULL)
	{
		perror("Error");
	}

	ret_line = _strcpy(ret_line, line);
	ret_line[len_line - 1] = '\0';
	return (ret_line);

}
