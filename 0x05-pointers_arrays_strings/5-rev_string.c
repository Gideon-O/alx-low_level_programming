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
	int i = 0, j = 0;
	char rev_s;

	while (s[i] != '\0')
	{
		i++;
	}

	while (j < i--)
	{
		rev_s = s[i];
		s[i++] = s[j];
		s[i] = rev_s;
	}
}
