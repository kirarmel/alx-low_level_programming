#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *opcode;

	if (argc != 2) {
	printf("Error\n");
	exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0) {
	printf("Error\n");
	exit(2);
	}

	opcode = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++) {
	if (i > 0)
	printf(" ");
	printf("%02x", opcode[i]);
	}
	printf("\n");

	return (0);
}
