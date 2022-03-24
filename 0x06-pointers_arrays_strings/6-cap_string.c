#include "main.h"

/**
 * cap_string - Capitalize the first letter of each word
 * @str: String to capitalize
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i;

	i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	for (; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\n':
			case '\t':
				if (str[i + 1] > 96 && str[i + 1] < 123)
				{
					str[i + 1] = str[i + 1] - 32;
				}
	}
	return (str);
}
