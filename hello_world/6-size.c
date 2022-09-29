#include <stdio.h>

/**
 * main - print bytes variables
 *
 * Return: Always 0 (Success)
 */

        char chartype;
	int inttype;
	long int longinttype;
	long long int longlonginttype;
       	float floattype;

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(inttype));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longinttype));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlonginttype));
	printf("Size of a float: %zu byte(s)\n", sizeof(floattype));
return (0);
}
