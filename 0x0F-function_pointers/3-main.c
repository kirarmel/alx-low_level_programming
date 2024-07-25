#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
	printf("Error\n");
	exit(99);
	}
	
	if ((operation == op_div || operation == op_mod) && num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}
    
	printf("%d\n", operation(num1, num2));
	return (0);
}
