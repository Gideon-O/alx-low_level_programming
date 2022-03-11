#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always o (Success)
 */
int main(void)
{
	int number;
	char letter;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar("\n");
	return (0);
}
