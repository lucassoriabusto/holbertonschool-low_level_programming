#include "main.h"

/**
  * main - adds positive numbers and prints the result.
  * @argc: Count number of arguments.
  * @argv: Array of strings (arguments).
  *
  * Return: 0 or 1 if one of the numbers contains symbols
  * that are not digits..
  */

int main(int argc, char **argv)
{
	int i = 0, j = 0, count = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i] != 0; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		count += atoi(argv[i]);
	}
	printf("%d\n", count);
	return (0);
}
