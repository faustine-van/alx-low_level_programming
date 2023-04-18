#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *init_dog - initialise a variable type struct dog
 *@d: pointer
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = malloc(sizeof(name) + 1);
	if (d->name == NULL)
		exit(1);

	strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(sizeof(owner) + 1);
	if (d->owner == NULL)
		exit(1);

	strcpy(d->owner, owner);
}
