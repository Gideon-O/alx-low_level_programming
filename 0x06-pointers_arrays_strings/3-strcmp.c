#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String argument
 * @s2: String argument
 *
 * Return: Greater than 0 if s2 after s1
 * Less than 0 if s2 before s1
 * 0 if s2 = s1
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
