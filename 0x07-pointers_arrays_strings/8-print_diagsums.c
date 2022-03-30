#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagrams- gets the sum of diagonams in a diagram
 * @a: Integer array
 * @size: the square value of the matrix
 *
 * Return: Always 0
 */

void print_diagrams(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;
	int s = size * size;

	for (i = 0; i < s; i = i + size + 1)
	{
		sum1 = sum1 + a[i];
	}

	for (i = size - 1; i < s - 1; i = i + size - 1)
	{
		sum2 = sum2 + a[i];
	}

	print ("%d, %d\n", sum1, sum2);
}
