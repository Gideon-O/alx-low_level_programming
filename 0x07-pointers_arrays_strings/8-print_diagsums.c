#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals
 * @a: Integer array
 * @size: size of the matrix
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int s = size * size;
	int i;

	for (i = 0; i < s; i += size - 1)
	{
		sum1 += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
