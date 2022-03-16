#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	long int x = 1, y = 2, z;

	int this_many;

	printf("%ld, ", x);

	for (this_many = 0; this_many < 98; this_many++)
	{
		if (this_many <= 96)
		{
			printf("%ld", y);
			z = x + y;
			x = y;
			y = z;
			printf(", ");
		}
		if (this_many == 97)
		{
			printf("%ld", y);
		}
	}

	printf("\n");

	return (0);
}
