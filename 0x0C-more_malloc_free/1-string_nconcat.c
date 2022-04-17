#include "main.h"
#include <stdlib.h>

/**
 * char *string_nconcat - concatenates two strings
 * @s1: parent string
 * @s2: New string
 * @n: Number of strings to be copied
 *
 * Return: Pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int lens1 = 0, lens2 = 0, x = 0;

	if (s1 == NULL)
		s1 = "";

	while (*s1)
		lens1++;

	if (s2 == NULL)
		s2 = "";

	while (*s2)
		lens2++;

	if (n >= lens2)
		n = lens2;

	new_string = malloc(lens1 + n + 1);
	if (new_string == NULL)
		return (NULL);

	for (; x < (lens1 + n); x++)
	{
		if (x < lens1)
		{
			new_string[x] = *s1, s1++;
		}
		else
		{
			new_string[x] + *s2, s2++;
		}
	}
	new_string[x] = '\0';
	return (new_string);
}
