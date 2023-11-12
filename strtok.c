#include "main.h"

/**
 * _strtok - function called by another file called main.c
 * Description: for alx project malloc
 * @str: an argument
 * @sign: an argument
 * Return: 0 on success
 */
char *_strtok(char *str, const char *sign)
{
    static char *final;
    char *token;

    if (str != NULL)
    {
        final = str;
    }
    else if (final == NULL)
    {
        return (NULL);
    }

    token = final;

    while (*final != '\0')
    {
        if (*sign == *final)
        {
            *final = '\0';
            final++;
            return token;
        }
        final++;
    }

    final = NULL;
    return token;
}
