#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: file name
* @letters:number of letters it should read and prin
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{


	int fd;
	char *buf;
	int r;
	int w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	close(fd);

	w = write(1, buf, r);
	if (w == -1)
		return (0);
	free(buf);
	return (r);
}
