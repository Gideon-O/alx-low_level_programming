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
	dog_t *my_dog;
	char *copy_name, *copy_owner;
	int name_len, owner_len, i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;

	while (owner[owner_len])
		owner_len++;

	copy_name = malloc(name_len + 1);
	if (copy_name == NULL)
		return (NULL);
	for(i = 0; name[i]; i++)
		copy_name[i] = name[i];
	copy_name[i] = '\0';

	copy_owner = malloc(owner_len + 1);
	if (copy_owner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		copy_owner[i] = owner[i];
	copy_owner[i] = '\0';

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
