#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that stores an array of integer range
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to the integer array
 */

int *array_range(int min, int max)
{
	int i, diff;
	int *new_array;

	if (min > max)
		return (NULL);

	diff = max - min;
	new_array = malloc((diff + 1) * sizeof(int));

	if (new_array == NULL)
		return (NULL);
	
	for (i = 0; i < diff; i++)
		new_array[i] = min++;
	
	return (new_array);
}
