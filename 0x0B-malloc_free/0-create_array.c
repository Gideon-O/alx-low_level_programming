#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array in memory
 * @size: size of the memory to be allocated
 * @c: character to be put in memory block
 *
 * Return: NULL if size is zero or fails, and pointer
 * if successful
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size <= 0)
		return (NULL);
	if (size > 0)
	{
		array = malloc(size * sizeof(char));
		while (*array++)
		{
			array[i] = c;
			i++;
		}
		return (*array);
	}
}
