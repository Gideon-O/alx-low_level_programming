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
	int n = strlen(s);
	int x = 0, y = n;
	char xy;

	for (; x < n / 2; x++)
	{
		xy = s[y];
		s[x] = s[n - x - 1];
		s[n - x - 1] = xy;
	}
}
