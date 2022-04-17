#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: Number of elements
 *
 * Return: Pointer on success, or exit with error 98
 */

void *malloc_checked(unsigned int b);
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
