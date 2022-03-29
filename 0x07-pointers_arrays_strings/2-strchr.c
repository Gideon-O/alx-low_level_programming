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
	int i = 0;
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		else
		{
			return (NULL);
		}
	}
}
