#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - Chaecks if character is upper of lowercase
 * @c: Character value
 * Return: 1 or 0 if uppercase of lowercase respectively
 */

int _isupper(int c)
{
	int i;

	if (isupper(c))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
