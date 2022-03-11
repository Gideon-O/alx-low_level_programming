#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	do {
		/*print lowecase and increments */
		putchar(lowercase);
		lowercase++;
		/* prints uppercase and increments */
		putchar(uppercase);
		uppercase++;
		putchar('\n');
	} while (lowercase <= 'z' && uppercase <= 'Z');
	return (0);
}
