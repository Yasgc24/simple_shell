#include "shell.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont])
		cont++;

	return (cont);
}

/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int i;

	for (i = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

/**
 * _strcpy - Copies the string
 * @dest: char
 * @src: char
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - Concatenates two strings
 * @dest: String 1
 * @src: String 2
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * c_print - print a array characters
 * @str: Input data array
 * Return: void
 **/

void c_print(char *str)
{
	int i, count;

	count = _strlen(str);
	for (i = 0; i < count; i++)
		write(1, &str[i], 1);
}
