#include<stdio.h>
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
	n = rand() - RAND_MAX / 2;
	/* your code goes heretofore */
	/* greater than 5 */
	if (n % 10 > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, n % 10);
	/* last digit is zero */
	else if (n % 10 == 0)
		printf("The last digit of %d is %d and is 0\n", n, n % 10);
	/* last digit is less than 6 and not zero */
	else
		print("The last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
