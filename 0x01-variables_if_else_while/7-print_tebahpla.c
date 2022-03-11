#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char reverse_char = 'z';
	char end_char = 'a';

	while (reverse_char >= end_char)
	{
		putchar(reverse_char);
		reverse_char--;
	}
	putchar('\n');
	return (0);
}

