#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Returns: Void
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; i < 26; x++)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
