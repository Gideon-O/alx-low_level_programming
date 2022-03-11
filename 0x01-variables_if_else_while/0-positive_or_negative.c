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
	long int n;

	srand(time(0));
	n =  rand() - RAND_MAX / 2;
	/* my code is here */
	/* is positive */
	if (n > 0)
		printf("%ld is positive\n", n);

	/* is negative */
	else if (n == 0)
		printf("%ld is zero\n", n);

	/* is zero */
	else
		printf("%ld is negative\n", n);
	return (0);
}
