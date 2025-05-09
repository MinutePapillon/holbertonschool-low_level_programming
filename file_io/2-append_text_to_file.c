#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: pointer to the mem adress of the file
 * @text_content: pointeur
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	int n_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
