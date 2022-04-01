#include <stdio.h>

/**
 * main - entry to the program
 * @argc: CLI argument count
 * @argv: Array of arguments passed to CLI
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		return (-1);
	}
}
