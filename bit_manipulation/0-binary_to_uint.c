#include "main.h"
#include <string.h>
/**
* binary_to_uint - converts a binary number to unsigned int
* @b: pointing to a string of 0 and 1 chars
*
* Return: the converter number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int pot = 1, num = 0;
	int i;

	if (!b)
		return (0);
	for (i = strlen(b) - 1; i > -1; i--)
	{
		if (b[i] == '1')
			num += pot;
		else if (b[i] != '0')
			return (0);
		pot = 2 * pot;
	}
	return (num);
}
