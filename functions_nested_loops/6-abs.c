#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: is a integer number resived
 * Return: less than 0 absolute value,greater than 0 the number, otherwise 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
