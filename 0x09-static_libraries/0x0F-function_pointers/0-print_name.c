#include "function_pointers.h"

/**
 * print_name - A function that prints the name passed to it
 * @name: Name to be printed
 * @f: Function to print name
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
