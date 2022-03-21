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
	int n = strlen(s) - 1;
	int x = 0;

	for (; x < n ; x++)
	{
		char y;

		y = s[x];
		s[n] = y;
	}
}
