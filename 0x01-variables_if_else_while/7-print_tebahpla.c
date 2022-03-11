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
		putchar("%c", reverse_char);
		putchar("\n");
		reverse_char--;
	}
	return (0);
}

