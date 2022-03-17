#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int fibonacci[98], z = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 2; i < 98; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[1 - 2];

		if ((fibonacci[i] % 2) == 0 && fibonacci[i] < 4000000)
		{
			z = z + fibonacci[i];
		}
	}
	printf("%ld\n", z);

	return (0);
}
