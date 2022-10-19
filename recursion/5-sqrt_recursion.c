#include "main.h"

/**
  * sqrt_added - function that let us iterates a number to find the square root
  * @x: Value to do square root.
  * @y: Value of the square root (if any).
  *
  * Return: variable y if square root exists and its a natural, -1 if square
  * root exists but its not a natural.
  */
int sqrt_added(int x, int y)
{
	if (x == y * y)
		return (y);
	else if (x < y * y)
		return (-1);
	else
		return (sqrt_added(x, y + 1));
}

/**
  * _sqrt_recursion - calculates the square root of n.
  * @n: Number which we calculate its square root.
  *
  * Return: -1 if square root is not a natural number or the value of
  * y in the above function if the square root is a natural number.
  */
int _sqrt_recursion(int n)
{
	return (sqrt_added(n, 0));
}
