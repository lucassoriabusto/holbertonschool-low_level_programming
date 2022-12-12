#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - functions that print strings followed by a new line
 *@n: number of strings passed to th function
 *@separator: string to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list(count);

	if (n > 0)
	{
		va_start(count, n);

		for (i = 0 ; i < n - 1 ; i++)
		{
			s = va_arg(count, char *);
			printf("%s%s", s == NULL ? "(nil)" : s, separator == NULL ? "" : separator);
		}
		s = va_arg(count, char *);
		printf("%s", s == NULL ? "(nil)" : s);
		va_end(count);
	}
	printf("\n");
}
