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
	int x = 0, y = n - 1;
	char v1, v2;

	while (y > x)
	{
		v1 = s[x];
		v2 = s[y];
		s[x] = v2;
		s[y] = v1;
		y--;
		x++;
	}
}
