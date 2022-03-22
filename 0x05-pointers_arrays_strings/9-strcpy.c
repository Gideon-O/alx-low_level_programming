#include <string.h>
#include "main.h"

/**
 * _strcpy - Copy a string to another string
 * @dest: Empty array to have the string
 * @src: The string to be copied
 * Return: Character value
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
