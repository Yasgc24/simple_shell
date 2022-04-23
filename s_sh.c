#include "head.h"

/**
 * prompt - executes interactive prompt
 *
 * Return: 0 to success.
 */
void *prompt(char *interactive_str, char *line)
{
    char **argument_variable = NULL;
    int len_characters = 0, argument_count = 0;
    size_t line_size = 0;

    while (EOF)
    {
        print_line(interactive_str);

        
        fflush(stdin);
        
        len_characters = getline(&line, &line_size, stdin);

     
        if (line == NULL)
            perror("Error");


        if (len_characters == EOF)
        {
            free(line);
            fflush(stdin);
            exit(127);
        }
        
        line = clean_line(line);

        
        argument_count = argc(line);
        
        argument_variable = argv(line, argument_count);
        if (argument_count != 0)
        {
            argument_variable[0] = create_path_extension(argument_variable[0], argument_variable, argument_count);
            printf("%s\n", argument_variable[0]);
        }        
    }
        
}
