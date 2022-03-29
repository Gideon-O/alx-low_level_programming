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

	/* get the string leng of the accept string */
	while (accept[m] != '\0')
	{
		m++;
	}

	/* loop through each character in s */
	for (x = 0; s[x] != '\0'; x++)
	{
		/**
		 * checks for characters that are consistently
		 * equivalnet to any of the characters in the accpet
		 */
		for (y = 0; y < m; y++)
		{
			i++;

			if (s[x] != accept[y])
				return (i);
		}
	}
}
