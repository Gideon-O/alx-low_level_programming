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
		putchar("%c", lowecase);
		lowercase++;
		/* prints uppercase and increments */
		putchar("%c", uppercase);
		uppercase++;
	} while (lowecase <= 'z' && uppercase <= 'Z');
	return (0);
}
