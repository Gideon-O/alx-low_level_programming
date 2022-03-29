#include"main.h"
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
	int i = 0, j = 0, k = 0, l = 0;
	int k = size - 1;
	int index_count = sizeof(a);

	while (l < index_count)
	{
		for (; i < size; i++)
		{
			for (; j < size; j++)
			{
				if (i == j)
				{
					sum1 = sum1 + a[l];
				}
				if (j == k && j >= 0)
				{
					sum2 = sum2 + a[l];
					k--;
				}
			}
		}
		l++;
	}
	printf("%d, %d\n", sum1, sum2);
}
