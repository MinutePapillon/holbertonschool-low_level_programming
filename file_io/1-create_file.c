#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: pointer to the mem adress of the file
 * @text_content: pointeur
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	int n_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		n_written = write(fd, text_content, len);

		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
