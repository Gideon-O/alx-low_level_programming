#include "main.h"

/**
 * _memcpy - A function that copys memory area
 * @dest: A memory area destination to copy
 * @src: A memory are source to copy from
 * @n: Number of bytes to be copied
 * Return: Returns a pointer to the copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (start);
}
