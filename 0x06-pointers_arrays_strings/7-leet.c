#include "main.h"

/**
 * leet - encrypt string
 * @s: String to be encrypted
 *
 * Return: String
 */

char *leet(char *s)
{
	char strm[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == strm[y];
				s[x] = num[y];
		}
	}

	return (s);
}
