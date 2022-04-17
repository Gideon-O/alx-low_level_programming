#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to allocate memory to an array
 * @nmemb: Array elements
 * @size: Size of each array element
 *
 * Return: Pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	for (; i < (nmemb * size); i++)
		*(space + i) = 0;

	return (space);
}
