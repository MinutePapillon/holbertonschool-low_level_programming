#include "main.h"

/**
 * read_textfile -  reads a text file and prints it
 *
 * @filename: pointer to the mem adress of the file
 * @letters: the number of letters/byte we will allocate the buffer with
 *
 * Return: 0 if any operation fail, the number of printed letters otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char buffer[2048];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		close(fd);
		return (0);
	}

	close(fd);

	return (n_written);
}
