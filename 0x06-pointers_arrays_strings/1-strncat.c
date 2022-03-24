#include "main.h"

/**
 * _strncat - Concatenates an extra n characters
 * @dest: String argument
 * @src: String argument
 * @n: Integer argument
 *
 * Return: String
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, x = 0, y = 0, z = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[a] != '\0')
	{
		a++;
	}

	y = x + n;

	while (x < y || src[z] != '\0')
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	if (a >= n)
		continue;
	else
		dest[y] = '\0';

	return (dest);
}
