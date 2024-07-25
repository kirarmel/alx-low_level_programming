#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to the dog_t struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;
	
	if (d->name != NULL)
	free(d->name);
	if (d->owner != NULL)
	free(d->owner);

	free(d);
}
