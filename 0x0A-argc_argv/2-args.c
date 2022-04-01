#include <stdio.h>

/**
 * main - Entry point
 * @argc: Integer count for CLI arguments
 * @argv: Character array of CLI arguments
 *
 * Return: Always 0 for success
 * non zero for fialure
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
