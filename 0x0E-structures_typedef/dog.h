#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure for dog
 * @name: Name of dog
 * @age: Age of dogs
 * @owner: Name of dog owner
 */

struct dog
{
	char *name;
	double age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/* dog_t *new_dog(char *name, float age, char *owner); */
void free_dog(dog_t *d);

#endif
