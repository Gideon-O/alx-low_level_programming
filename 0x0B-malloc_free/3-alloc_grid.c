#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - two dimensional array
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to a grid, of null if zero or negative
 * value of widht and/or height
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = int(**)malloc(sizeof(*int) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = int(*)malloc(sizeof(*int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
