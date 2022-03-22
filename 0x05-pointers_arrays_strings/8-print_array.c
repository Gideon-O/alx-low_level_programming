#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the array passed to it
 * @a: The array to print
 * @n: The indexes to print
 * Return: Void
 */

void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", a[x]);

		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
