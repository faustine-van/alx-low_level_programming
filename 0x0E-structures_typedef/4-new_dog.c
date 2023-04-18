#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - create new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: new pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->name = malloc(strlen(name) + 1);

	if (new->name == NULL)
	{
		free(new);
		return (NULL);  /*Return NULL if malloc fails*/
	}

	strcpy(new->name, name);

	new->owner = malloc(strlen(owner) + 1);

	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);  /* Return NULL if malloc fails*/
	}

	strcpy(new->owner, owner);
	/*Assign the age to the new dog*/

	new->age = age;

	return (new);
}
