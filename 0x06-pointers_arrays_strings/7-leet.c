#include "main.h"

/**
 * leet - encrypt string
 * @s: String to be encrypted
 *
 * Return: String
 */

char *leet(char *s)
{
	char *str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int *num[5] = {4, 3, 0, 7, 1};

	int x = 1;
	int y = 0;

	for (; s[y] != '\0'; y++)
	{
		if (s[y] == str[x] || s[y] == str[x + 1])
		{
			s[y] = num[x % y];
			x++;
		}
	}
}
