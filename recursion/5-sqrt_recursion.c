#include "main.h"
/**
 *
 *
 */
int _sqrt_recursion(int x; int y)
{
	if (x == y * y)
		return (y);

	else if (x < y * y)
		return (-1);
	else
		return (sqrt_added(x, y + 1));
}

int _sqrt_recursion(int n)
{
	return(_sqrt_recursion (n,0));
}
