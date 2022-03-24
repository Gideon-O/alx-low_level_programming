#include "main.h"

/**
 * _strncpy - copies n characters from one character arrya to another
 * @dest: Character array argument
 * @src: Character array argument
 * @n: Integer argument
 *
 * Return: Character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	for (; m < n && src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	for (; m < n; m++)
	{
		dest[m] = '\0';
	}

	return (dest);
}
