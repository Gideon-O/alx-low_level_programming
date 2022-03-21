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
	int j = strlen(s), i = 0;
	char *rev_s[];

	for (; i < j; i++)
	{
		rev_s[i] = s[j];
		j--;
	}
}
