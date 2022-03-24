#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates/appends an string to the end of another string
 * @dest: String argument
 * @src: String argument
 *
 * Return: A character array
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *temp;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	int tot = i + j;
	int y = 0;

	while (y < tot)
	{
		if (y < i)
		{
			temp[y] = dest[y];
		}
		else if (y > i)
		{
			int z = 0;

			temt[y] = src[z];
		}
	}
	return (temp);
}
