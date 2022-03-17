#include "main.h"

/**
 * _isupper - Chaecks if character is upper of lowercase
 * @c: Character value
 * Return: 1 or 0 if uppercase of lowercase respectively
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'z' && c <= 'z')
		return (0);
}
