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
	char aux;
	int i = 0, j = 0, z;

	j = strlen(s) - 1;
	z = strlen(s) - 1;

	for (; i < z; i++)
	{
		aux = s[i];
		s[j] = s[i];
		s[i] = aux;
		j--;
	}
}
