#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	char l_letter = 'z';

	for (letter = 'a'; letter <= l_letter; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		else
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
