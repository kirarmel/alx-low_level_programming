#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
    int i, j;

    for (i = 0; i < 10; i++)
    {
        j = 0;
        while (alphabet[j] != '\0')
        {
            _putchar(alphabet[j]);
            j++;
        }
    }
}
