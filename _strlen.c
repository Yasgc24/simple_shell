#include "shell.h"

/**
 * _strlen - Returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
int n = 0;

while (*s++)
{
n++;
}
return (n);
}
