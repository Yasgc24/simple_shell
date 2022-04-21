#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define DELIM " \t\r\a\n"
extern char **environ;

int pr_basic(void);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_array(char **argv, int argc);
int argc(char *string);
char *add_path(char **command);
char **tokenizer(char *string, char *delim);

#endif
