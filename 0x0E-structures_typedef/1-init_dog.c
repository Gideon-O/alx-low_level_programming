#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function to intialize the strucutre
 * @d: Struct name
 * @name: Nmae of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
