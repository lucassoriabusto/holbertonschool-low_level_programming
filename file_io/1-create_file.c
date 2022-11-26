#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: the string to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int t;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	t = write(fd, text_content, strlen(text_content));
	if (t == -1)
		return (-1);
	close(fd);
	return (1);
}
