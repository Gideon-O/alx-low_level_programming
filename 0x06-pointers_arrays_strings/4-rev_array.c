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
	int temp1, temp2;

	for (; i < n; i++)
	{
		temp1 = a[i];
		temp2 = a[n - 1];
		a[i] = temp1;
		a[n - 1] = temp2;
		n--;
	}
}