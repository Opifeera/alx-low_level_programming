#include "main.h"

/**
 * _pow_recursion - function that returns the 
 * value of x raised to the power of y
 *
 * @x: for x
 * @y: for y
 *
 * Return: powers
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res *= _pow_recursion(x. (y - 1));
	return (res);
}


