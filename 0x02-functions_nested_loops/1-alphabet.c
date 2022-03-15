#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase characters
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
