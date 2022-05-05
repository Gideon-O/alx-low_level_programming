#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>



/**
 * main - Entry to prograd
 * @argc: Number of arguments
 * @argv: Argment array
 *
 * Return: 0 on success
 */

int main(int argc, char *argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);

	return (0);
}
