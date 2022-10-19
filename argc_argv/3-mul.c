#include "main.h"

/**
  * main - multiplies two numbers and prints the result.
  * @argc: Count number of arguments.
  * @argv: Array of strings (arguments).
  *
  * Return: 1.
  */

int main(__attribute__ ((unused)) int argc, char **argv)
{
	int i = 0, j = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);
	printf("%d\n", j);
	return (0);
}
