#include "main.h"

/**
 * cap_string - Capitalize the first letter of each word
 * @str: String to capitalize
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (check_separator(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

/**
 * check_separator - Sepatarators of words
 * space, tab, newline, ,, ., ;, !, ?, \", (, ), {, }
 * @c: Input character
 *
 * Return: 1 if separator, 0 otherwise
 */

int check_separator(char c)
{
	int r = 0;

	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };

	for (; r < 13; r++)
	{
		if (s == separators[r])
			return (1);
	}

	return (0);
}
