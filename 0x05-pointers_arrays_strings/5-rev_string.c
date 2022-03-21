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
	int len = strlen(s), i = 0;
	char rev_s;

	while (s[i] != '\0')
	{
		rev_s = s[i];
		s[len] = rev_s;
		len--;
		i++;
	}


}
