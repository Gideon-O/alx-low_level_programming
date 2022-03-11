#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* more headers go here */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n =  rand() - RAND_MAX / 2;
	/* my code is here */
	/* is positive */
	if (n > 0)
		printf("%d is positive\n", n);

	/* is negative */
	else if (n == 0)
		printf("%d is zero\n", n);

	/* is zero */
	else
		printf("%d is negative\n", n);
	return (0);
}
