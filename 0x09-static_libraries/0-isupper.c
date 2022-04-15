#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: An input charcter
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'X'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
