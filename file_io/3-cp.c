#include "main.h"
/**
* main - copies the content of a file to another file
* @argc: argument count
* @argv: argument vector
*
* Return: 0
*/
int main(int argc, char **argv)
{
	int fd, f2, r, w;
	char *buff;

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY |  O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	buff = malloc(1024);
	r = read(fd, buff, 10024);
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);

		exit(98);

	}
	w = write(f2, buff, r);
	if (w == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if ((close(fd) == -1))
		dprintf(2, "Error: Can't close fd %d\n", fd), exit(100);
	if ((close(f2) == -1))
		dprintf(2, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}

