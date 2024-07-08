#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    char *temp_s = s;
    char *temp_accept;

    while (*temp_s)
    {
        temp_accept = accept;
        while (*temp_accept)
        {
            if (*temp_s == *temp_accept)
                return temp_s; 
            temp_accept++;
        }
        temp_s++;
    }

    return NULL;  
}
