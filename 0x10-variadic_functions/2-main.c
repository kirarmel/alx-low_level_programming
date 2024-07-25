#include "main.h"
#include <stddef.h> /* for NULL */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	
	print_strings(", ", 2, "Jay", "Django");
	print_strings("; ", 3, "Hello", NULL, "World");
	print_strings(NULL, 1, "SingleString");

	return (0);
}
