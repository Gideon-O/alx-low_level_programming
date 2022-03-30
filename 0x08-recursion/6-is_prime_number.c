#include "main.h"

/**
 * is_prime_number - checks if input is prime number
 * @n: Number to be checked
 *
 * Return: 1 if prime number
 * 0 if not prime number
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - checks if num is disible
 * @num: number to be checked
 * @div: result of division
 * Return: 1 if num divisible by div, or
 * 0 if otherwise
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
