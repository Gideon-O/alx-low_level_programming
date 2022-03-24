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
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
