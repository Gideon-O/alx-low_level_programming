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
	int x = 0, y = n;
	char xy, *srev;

	for (; x < n ; x++)
	{
		xy = s[y];
		srev[x] = xy;
		y--;
	}
}
