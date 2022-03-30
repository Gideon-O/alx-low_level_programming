#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: mina string input
 * @needle: substring to search for
 *
 * Return: character for pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *n = needle;
	char *h = haystack;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				needle++;
				haystack++;
			}
			
			if (needle == '\0')
				return (haystack);
			
			haystack = h + 1;
		}
	}
	return (NULL);
}
