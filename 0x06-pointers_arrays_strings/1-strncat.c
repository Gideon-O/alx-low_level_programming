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
	int x = 0, y = 0, z = 0;
	char *temp;

	while (dest[x] != '\0')
	{
		x++;
	}

	y = x + n;

	while (x < y || src[z] != '\0')
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	dest[z] = '\0';

	return (dest);
}
