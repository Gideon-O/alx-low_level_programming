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
	char *start = a;

	while (n--)
	{
		*start = b;
		a++;
	}
	return (start);
}
