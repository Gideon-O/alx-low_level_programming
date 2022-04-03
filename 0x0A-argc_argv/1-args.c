#include <stdio.h>

/**
 * main - entry point
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
