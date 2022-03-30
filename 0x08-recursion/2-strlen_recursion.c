#include "main.h"

/**
 * _strlen_recursion - gets the lenght of a string
 * @s: string to get lenght
 *
 * Return: Integer value
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1)); 
	}

	return (0);
}
