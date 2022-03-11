#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase_char;

	lowercase_char = 'a';

	while (lowercase_char <= 'z')
	{
		putchar(lowercase_char);
		putchar('\n');
		lowercase_char = lowercase_char + 1;
	}
	return (0);
}

