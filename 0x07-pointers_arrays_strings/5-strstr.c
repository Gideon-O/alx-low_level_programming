#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: parent string
 * @needle: String to be searched for
 *
 * Return: pointer to begging of located string
 * or NULL of substring absent
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;

		while (*n)
		{
			if (*n == *h)
			{
				n++;
				h++;
			}

			else
				break;
		}

		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
