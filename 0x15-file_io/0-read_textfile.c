#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - A function that reads teh contents of a text file
 * @filename: Name of the file to be read
 * @letters: Number of letters to read and print
 *
 * Return: Number of readable and printable letters or 0 if file is NULL
 * of unreadable
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, res_read, res_write;
	char *buf;

	if (filename == NULL)
		return (0);

	but = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	res_read = read(fd, buf, letters);
	if (res_read == -1)
	{
		free(buf);
		return (0);
	}

	res_write = write(STDOUT_FILENO, buf, res_read);
	if (res_write == -1 || res_read != res_write)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (res_write);
}
