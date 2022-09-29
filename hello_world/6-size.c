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
	printf("Size of a char: %zu bytes\n", sizeof(chartype));
	printf("Size of an int: %zu bytes\n", sizeof(inttype));
	printf("Size of a long int: %zu bytes\n", sizeof(longinttype));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlonginttype));
	printf("Size of a float: %zu bytes\n", sizeof(floattype));
return (0);
}
