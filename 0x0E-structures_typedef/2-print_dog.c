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
		continue;

	char *dog_name;
	double dog_age;
	char *dog_owner;

	*dog_name = *d.name;
	*dog_age = *d.age;
	*dog_owner = d.owner;

	if (dog_name == NULL)
		printf("(nul)\n");
	else
		printf("Name: %s\n", dog_name);

	if (dog_age == NULL)
		printf("(nul)\n");
	else
		printf("Age: %d\n", dog_age);

	if (dog_owner == NULL)
		printf("(nul)\n");
	else
		printf("Owner: %s\n", dog_owner);
}
