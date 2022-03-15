#include "main.h"

/**
 * add - Check main file
 * Description - takes two values and prints sum
 * @x: Parameter argument
 * @y: Parameter argument
 * Return: Always sum
 */

int add(int x, int y)
{
	int sum;

	sum = x + y;
	if ((sum / 10) != 0)
	{
		_putchar((sum / 10) + '0');
		_putchar((sum % 10) + '0');
	}
	else
	{
		_putchar(sum + '0');
	}
	_putchar('\n');

	return (sum);
}
