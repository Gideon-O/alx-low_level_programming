#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog variable
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len, i;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_len = 0;
	owner_len = 0;
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog->name = malloc(name_len * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;

	new_dog->owner = malloc(owner_len * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
