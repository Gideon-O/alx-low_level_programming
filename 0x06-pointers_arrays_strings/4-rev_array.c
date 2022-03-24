#include "main.h"

/**
 * reverse_array  - revereses an array of integers
 * @a: Integer array
 * @n: Size of the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
