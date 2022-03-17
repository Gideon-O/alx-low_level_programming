#include "main.h"

/**
 * _isupper - Chaecks if character is upper of lowercase
 * @c: Character value
 * Return: 1 or 0 if uppercase of lowercase respectively
 */

int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
		i = 1;
	else if (c >= 97 && c <= 122)
		i = 0;

	return (i);
}
