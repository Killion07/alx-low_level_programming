#include <stdio.h>
#include "main.h"
/**
 * free_dog - function for freeing space
 * @d: pointer to str
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
