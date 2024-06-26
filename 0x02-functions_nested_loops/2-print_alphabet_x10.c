#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);	/* Print each letter */
			letter++;
		}
		_putchar('\n');	/* Print new line after each set of alphabet */
	}
}
