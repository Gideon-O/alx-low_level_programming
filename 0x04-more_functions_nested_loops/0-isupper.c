#include "main.h"

/**
 * _isupper - Chaecks if character is upper of lowercase
 * @c: Character value
 * Return: 1 or 0 if uppercase of lowercase respectively
 */

int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
		i = 1;
	else if (c >= 'z' && c <= 'z')
		i = 0;

	return (i);
}
