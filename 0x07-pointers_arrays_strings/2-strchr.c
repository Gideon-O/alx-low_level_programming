#include "main.h"

/**
 * _strchr - searches for a character in a string, returns a pointer
 * @s: String array
 * @c: Character to be searched
 *
 * Return: Character (pointer address)
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);

		s++;
	}

	if (c == *s)
		return (s);

	return (0);
}
