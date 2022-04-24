#include "shell.h"

/**
 * create_path_extension - creates a path extension in command
 * @cmd: command to interprate
 * @argv: tokenized arguments 
 * @argc: argument counter
 *
 * Return: path with the command
 */
char *create_path_extension(char *cmd, char **argv, int argc)
{
    char *environment_path = NULL, *tokenzer = NULL, *token_buf = NULL;

    if (cmd[0] != '/')
    {
        environment_path = get_path();
        if (environment_path == NULL)
        {
            free_double_pointer(argv, argc);
            perror("Error");
        }
        tokenzer = get_route_bin(environment_path, tokenzer);
        token_buf = validate_access(cmd, tokenzer, argv, argc);
        if (token_buf == NULL)
        {
            free_double_pointer(argv, argc);
            perror("Error");
        }
        return token_buf;
    }
    return cmd;
}

/**
 * get_path - gets path in environment var
 *
 * Return: if path isn't find, returns NULL
 */
char *get_path()
{
    char *return_path = NULL;
    int i, path_len = 0;

    for (i = 0; environ[i] != NULL; i++)
    {
        if (_strcmp(environ[i], "PATH") == 0)
        {
            path_len = _strlen(environ[i]);
            return_path = malloc(sizeof(char) * (path_len + 1));
            if (return_path == NULL)
            {
                return NULL;
            }
            return_path = _strcpy(return_path, environ[i]);
        }
    }
    return return_path;
}


/**
 * get_route_bin - Splits the path from the env var to keep only the path
 * @path: str to be split with strtok
 * @token: env var
 *
 * Return: token with the correct str
 */
char *get_route_bin(char *path, char *token)
{
	token = strtok(path, "=");
	token = strtok(NULL, "=");
	token = strtok(token, ":");
	return (token);
}

/**
 * validate_access - check wheter the file exist or not in the path
 * @cmd: input command 
 * @tokenizer: tokens
 * @argv: tokenized arguments
 * @argc: counter of arguments
 *
 * Return: temp if access worked - NULL otherwise
 */
char *validate_access(char *cmd, char*tokenizer ,char **argv, int argc)
{
    int tokenizer_len = 0;
    char *return_token = NULL;

    while (tokenizer != NULL)
    {
        tokenizer_len = _strlen(tokenizer);
        return_token = malloc(sizeof(char) * (tokenizer_len + _strlen(cmd) + 2));
        if (return_token == NULL)
        {
            free_double_pointer(argv, argc);
            return NULL;
        }

        return_token = _strcpy(return_token, tokenizer);
        return_token = _strcat(return_token, "/");
        return_token = _strcat(return_token, cmd);

        if (access(return_token, X_OK) == 0)
        {
            return return_token;
        }
        else
        {
            return_token = NULL;
        }

        tokenizer = strtok(NULL, ":");
    }
    return return_token;
}
