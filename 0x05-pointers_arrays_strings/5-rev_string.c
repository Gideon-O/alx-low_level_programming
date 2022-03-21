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
	char aux;

	while (s[len] != '\0')
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
