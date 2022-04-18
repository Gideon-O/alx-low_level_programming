#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - A function to print the information of dog
 * @d: Pointer to the dog type variable
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("(nul)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("(nul)\n");
	else
		printf("Age: %0.6f\n", d->age);

	if (d->owner == NULL)
		printf("(nul)\n");
	else
		printf("Owner: %s\n", d->owner);
}
