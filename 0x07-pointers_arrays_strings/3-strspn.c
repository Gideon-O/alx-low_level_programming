#include "main.h"

/**
 * _strspn - calculates the lenght of the substring
 *
 * @s: String to calculate length
 * @accept: prefix of the string
 *
 * Return: Unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int x, y;

	/* loop through each character in s */
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0' && accept[y] != s[x]; j++)
			;
		if (s[x] == accept[y])
		{
			i++;
		}
		if (accept[y] == '\0')
		{
			return (i);
		}
	}

	return (i);
}
