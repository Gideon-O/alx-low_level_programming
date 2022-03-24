#include "main.h"

/**
 * string_toupper - converts any lowercase to uppercase
 * @s: String to convert
 *
 * Return: String
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
