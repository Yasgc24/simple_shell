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

char **argv(char *strings, int argc);
void free_array(char **array);
int argc(char *string);
char *add_path(char *command);
char **tokenizer(char *string, char *delim);
int new_proccess(char *path, char **tokens, char **environ);
void ctrl_c(int n);
void free_double_pointer(char **argv, int argc);
#endif
