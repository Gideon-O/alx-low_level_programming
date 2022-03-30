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
	int flag;
	char *start = accept;

	/* loop through each character in s */
	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				i++;
				flag = 1;
				break;
			}

			accept++;
		}
		s++;
		accept = start;

		if (flag == 0)
			break;
	}

	return (i);
}
