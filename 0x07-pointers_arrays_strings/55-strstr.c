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
	char *p;
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		y = 0;
		if (needle[y] == haystack[x])
		{
			p = &haystack[x];
			if (needle[y] == haystack[y] && haystack[x] != '\0')
			{
				y++;
				return (p);
			}
		}
	}

	return (0);
}
