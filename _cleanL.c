#include "shell.h"

/*
* clean_line - Cleans line 
* @line: line of command to be cleaned from memory
*
*/

char *clean_line(char *line)
{
    int len_line = 0;
    char *return_line = NULL;

    len_line = _strlen(line);
    return_line = (char *)malloc(sizeof(char) * len_line);
    if (return_line == NULL){
        perror("Error");
    }

    return_line = _strcpy(return_line, line);
    return_line[len_line - 1] = '\0';

    return return_line;

}