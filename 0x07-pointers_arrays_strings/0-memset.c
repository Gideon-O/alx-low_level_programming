#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @a: Character array argument
 * @b: Character argument
 * @n: Integer argument
 *
 * Return: Character
 */

char *_memset(char *a, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; i < n; i++)
	{
		a[i] = b;
	}
	return (*a);
}
