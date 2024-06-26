#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
    int i;

    for (i = 0; i < 10; i++)
    {
        char *ptr = alphabet;
        while (*ptr)
        {
            _putchar(*ptr);
            ptr++;
        }
    }
}
