#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	if (concat == NULL)
	{
	printf("Failed to concatenate strings\n");
	return (1);
	}
	printf("%s\n", concat);
	
	free(concat);
	
	return (0);
}
