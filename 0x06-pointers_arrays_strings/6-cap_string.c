#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: Pointer to the capitalized string.
 */
char *cap_string(char *str)
{
    int i = 0;
    char separators[] = " \t\n,;.!?\"(){}";

    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 'a' + 'A';

    while (str[i] != '\0')
    {
        
        for (int j = 0; separators[j] != '\0'; j++)
        {
            if (str[i] == separators[j])
            {
                i++;
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 'a' + 'A';
                break;
            }
        }
        i++;
    }

    return str;
}
