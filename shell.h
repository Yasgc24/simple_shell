#ifndef _HEAD_H_
#define _HEAD_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>

#define DELIM " \t\r\n\a"


extern char **environ;


int _strlen(char *s);
void print_line(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _atoi(char *s);
void print_number(int n);
void _puts(char *str);
int _putchar(char c);



void promptni(char *line);
int argc(char *str);
char **argv(char *line, int argument_count);
char *clean_line(char *line);
void free_double_pointer(char **argv, int argc);
void *prompti(char *interactive_str, char *line);
char *create_path_extension(char *cmd, char **argv, int argc);
char *validate_access(char *cmd, char*tokenizer ,char **argv, int argc);
char *get_route_bin(char *path, char *token);
void run_command(char **argv_command, int argc, int bash_count);
void create_process_to_execute(char **argv_command, int argc, int bash_count);
char *get_path();
void sys_error(char **argv, int count, char *error);


#endif
