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
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
