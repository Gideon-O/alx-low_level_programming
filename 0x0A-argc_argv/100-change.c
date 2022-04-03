#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of coins to be refuded
 * @argc: Argument count from the CLI
 * @argv: Argument array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int amount, coints = 0;

	if (argc == 2)
	{
		amount = atoi(argv[1]);
		if (amount < 0)
		{
			printf("0\n");
			return (0);
		}
		if (amount % 25 >= 0)
		{
			coints += amount / 25;
			amount = amount % 25;
		}
		if (amount % 10 >= 0)
		{
			coints += amount / 10;
			amount = amount % 10;
		}
		if (amount % 5 >= 0)
		{
			coints += amount / 5;
			amount = amount % 5;
		}
		if (amount % 2 >= 0)
		{
			coints += amount / 2;
			amount = amount % 2;
		}
		if (amount % 1 >= 0)
		{
			coints += amount;
		}

		printf("%d\n", coints);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
