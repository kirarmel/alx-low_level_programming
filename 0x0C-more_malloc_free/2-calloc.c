#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, NULL if malloc fails or nmemb/size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);
	
	total_size = nmemb * size;
	ptr = malloc(total_size);
	
	if (ptr == NULL)
	return (NULL);
		
	for (i = 0; i < total_size; i++) 
	{
	*((char *)ptr + i) = 0;
	}

	return (ptr);
}
