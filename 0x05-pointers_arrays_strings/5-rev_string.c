#include "main.h"
#include <string.h>

/**
 * rev_string - Print a string in reverse
 *
 * @s: String to reverse
 *
 * Return: Void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char rev_s;

	while (s[i] != '\0')
	{
		len++;
	}

	while (i < len--)
	{
		rev_s = s[i];
		s[i++] = s[len];
		s[len] = rev_s;
	}
}
