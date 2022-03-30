#include "main.h"

/**
 * _strpbrk - searches the first occurence of any of bytes of a string
 * @s: Main string
 * @accept: Substring to search
 *
 * Return: Character
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (s == accept)
			{
				return (s);
			}
			s++;
		}
	}

	return (0);
}
