#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory allocated for struct dog
 * @d: structdog to free 
 */
void free_dog(dog_t *d)
{
	if (d)
	{

		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
