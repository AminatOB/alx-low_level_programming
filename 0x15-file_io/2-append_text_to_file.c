#include "main.h"

/**
 * _strlen - find the length of string
 * @str: string
 * Return: length (ln)
 */
int _strlen(char *str)
{
	int ln;

	for (ln = 0; str[ln] != '\0'; ln++)
		;

	return (ln);
}

/**
 * append_text_to_file - append text and only if file exists
 * @filename: file
 * @text_content: content to append into file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int m_wrote;

	if (!filename)
		return (-1);

	/* open file if it exists */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if nothing to write, still successful */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	m_wrote = write(fd, text_content, _strlen(text_content));
	if (m_wrote == -1 || m_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
