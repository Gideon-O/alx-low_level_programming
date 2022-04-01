#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: Always 0 if sccessful
 * Non zero value if not successful
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		else if (argc == 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			int sum;

			sum += argv[i];
		}
	}
	printf("%d\n", sum);

	return (0);
}
