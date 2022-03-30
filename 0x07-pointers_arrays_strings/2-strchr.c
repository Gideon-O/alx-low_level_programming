#include "main.h"

/**
 * _strchr - checks for the occurence of a character in a string
 * @s: String to search a character in
 * @c: character to search
 *
 * Return: pointer to the first occurence of character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] == '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
