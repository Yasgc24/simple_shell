#include "shell.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
	s1++;
	s2++;
}
if (*s1 == *s2)
{
	return (0);
}
else
{
	return (*s1 - *s2);
}
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
	{
		dest[i] = src[i];
	}

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
	int n = 0;
	int s = 0;

	while (dest[n] != 0)
	{
		n++;
	}
while (src[s] != 0)
{
	dest[n] = src[s];
	n++;
	s++;
}
return (dest);
}
