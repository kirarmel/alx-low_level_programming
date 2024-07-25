#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * 
 * Return: pointer to the new dog_t struct, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    size_t name_len, owner_len;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    if (name != NULL)
    {
        name_len = strlen(name) + 1;
        d->name = malloc(name_len);
        if (d->name == NULL)
        {
            free(d);
            return (NULL);
        }
        strcpy(d->name, name);
    }
    else
    {
        d->name = NULL;
    }

    if (owner != NULL)
    {
        owner_len = strlen(owner) + 1;
        d->owner = malloc(owner_len);
        if (d->owner == NULL)
        {
            free(d->name);
            free(d);
            return (NULL);
        }
        strcpy(d->owner, owner);
    }
    else
    {
        d->owner = NULL;
    }
    d->age = age;

    return (d);
}
