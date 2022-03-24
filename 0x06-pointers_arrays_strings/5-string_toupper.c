#include "main.h"
#include <ctype.h>

/**
 * string_toupper - converts any lowercase to uppercase
 * @s: String to convert
 *
 * Return: String
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (islower(s[i]))
			toupper(s[i]);
		else
			continue;
		i++;
	}

	return (s);
}
