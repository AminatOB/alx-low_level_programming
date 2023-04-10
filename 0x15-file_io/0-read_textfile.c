#include "main.h"

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: the file to read from
 * @letters: the size to read
 * Return: actual size of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t m_read, m_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read */
	m_read = read(fd, buffer, letters);
	if (m_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write */
	m_wrote = write(STDOUT_FILENO, buffer, m_read);
	if (m_wrote == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (m_read);

}
