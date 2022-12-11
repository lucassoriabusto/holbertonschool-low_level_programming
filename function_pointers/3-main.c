#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - performs simple operations
  * @argc: Number of arguments.
  * @argv: Array of arguments.
  *
  * Return: 0 or Error
  */

int main(int argc, char *argv[3])
{
	int a;
	int b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (strlen(op) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if (*op != '+' && (*op != '-') && (*op != '/') && (*op != '%') && *op != '*')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (*get_op_func(op))(a, b));
	return (0);
}
