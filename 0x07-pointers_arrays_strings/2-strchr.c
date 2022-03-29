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
	if (c == *s)
	{
		return (s);
		s++;
	}
	return (NULL);
}
