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
	int num, sum = 0;

	while (argc-- > 1)
	{
		for (; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
