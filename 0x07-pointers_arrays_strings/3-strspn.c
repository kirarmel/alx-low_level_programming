#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * consisting of only bytes from accept
 * @s: the string to check
 * @accept: the string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;
    char *temp_s = s;
    char *temp_accept;

    while (*temp_s)
    {
        found = 0;
        temp_accept = accept;

        while (*temp_accept)
        {
            if (*temp_s == *temp_accept)
            {
                count++;
                found = 1;
                break;
            }
            temp_accept++;
        }

        if (!found)
            break;

        temp_s++;
    }

    return count;
}
