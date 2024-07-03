#include "main.h"

/**
 * _strncat - concatenates two strings with limitation by n
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to append from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (*ptr != '\0')
    {
        ptr++;
    }

    while (*src != '\0' && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    *ptr = '\0';

    return dest;
}
