#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: Minimum value (inclusive).
 * @max: Maximum value (inclusive).
 *
 * Return: Pointer to the newly created array, NULL on failure or if min > max.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
	return (NULL);
	
	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	arr[i] = min + i;
	}

	return arr;
}
