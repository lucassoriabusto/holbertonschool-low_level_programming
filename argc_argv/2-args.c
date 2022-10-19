#include "main.h"

/**
  * main - prints all arguments passed, followed each by a new line.
  * @argc: Count number of arguments.
  * @argv: Array of strings (arguments).
  *
  * Return: 0.
  */

int main(int argc, char **argv)
{
	for (argc = 0; argv[argc] != NULL; argc++)
		printf("%s\n", argv[argc]);
	return (0);
}
