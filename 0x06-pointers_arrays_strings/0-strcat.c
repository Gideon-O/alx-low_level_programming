#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates/appends an string to the end of another string
 * @dest: String argument
 * @src: String argument
 *
 * Return: A character array
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	
	return (dest);
}
