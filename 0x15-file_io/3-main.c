#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Wrapper to test the cp functionality.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
	}
    
	return (0);
}
