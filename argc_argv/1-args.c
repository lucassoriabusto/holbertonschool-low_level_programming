#include "main.h"

/**
  * main - prints the number of arguments passed, followed by a new line.
  * @argc: Count number of arguments.
  * @argv: Array of strings (arguments).
  *
  * Return: 0.
  */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
