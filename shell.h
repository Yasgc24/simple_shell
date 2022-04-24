#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>

#define DELIM " \t\r\a\n"

extern char **environ;
int pr_basic(void);

/*string manipulation*/
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

void *prompt(char *interactive_str, char *line);
char **argv(char *strings, int argc);
int argc(char *string);
void free_double_pointer(char **argv, int argc);
#endif
