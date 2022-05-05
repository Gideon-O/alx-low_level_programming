#include "main.h"
#include <sys/type.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - A function that creates a file in POSIX
 * @filename: Name of the file to be created
 * @text_content: Information to print on th efile
 * Return: 1 on success and -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t fdw;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREATE | O_WRONLY | O_TRUNC, 0\600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (*(text_content + len) != '\0')
			len++;
		fdw = write(fd, text_content, len);
		if (fdw == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
