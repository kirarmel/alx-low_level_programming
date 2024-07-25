#include "function_pointers.h"

/**
 * print_name - prints a name using the function pointed to by f
 * @name: the name to print
 * @f: function pointer that takes a char * and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
	f(name);
	}
}
