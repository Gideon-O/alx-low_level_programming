#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: Where to copy to
 * @src: where to copy from
 * @n: extent to copy the memory area
 *
 * Return: character value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0, y = 0;

	while (n > 0)
	{
		dest[x] = src[y];
		x++;
		y++;
		n--;
	}
	return (dest);
}
