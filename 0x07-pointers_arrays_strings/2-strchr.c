#include "main.h"
#include <stdio.h>

/**
 * _strchr: function locates a character in a string
 * @s: string that stores character address and value
 * @c: character to be searched
 * 
 * Return: pointer to address of character 1st encounter in string of NULL if 
 * does not exist
 * 
 */
char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; *(s + i); i++)
    {
        if (*(s + i) == c)
            return (s + i);
    }
    if (*(s + i) == c)
    return (0);


}