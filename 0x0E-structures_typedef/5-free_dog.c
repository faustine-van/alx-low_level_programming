#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free dog
 *@d: ponter used to free
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
