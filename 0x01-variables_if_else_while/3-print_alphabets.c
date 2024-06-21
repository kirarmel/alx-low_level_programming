#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase);
		lowercase++;
	}

	for (i = 0; i < 26; i++)
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
