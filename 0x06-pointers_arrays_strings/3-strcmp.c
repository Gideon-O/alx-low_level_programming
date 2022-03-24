#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String argument
 * @s2: String argument
 *
 * Return: s1[x] - s2[x]
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}

	return (0);
}
