#include <stdio.h>

/**
 * main - entry point
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: Always 0 if success
 * Non zero if not successful
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int x = (int)argv[1];
		int y = (int)argv[2];

		int z = x * y;

		printf("%d\n", z);

		return (0);
	}

	else
	{
		printf("Error\n");

		return (1);
	}
}
