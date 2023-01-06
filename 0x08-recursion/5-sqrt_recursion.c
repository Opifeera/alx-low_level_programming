#include "main.h"

/**
 * _sqrt - finds natural square root of number
 *
 * @i: value 1
 * @rt: value 2
 *
 * Return: as conditioned
 */
int _sqrt(int i, int rt)
{
	if ((rt * rt) == i)
		return (rt);
	if (rt == (i / 2))
		return (-1);
	return (_sqrt(i, (rt + 1)));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, rt));
}

