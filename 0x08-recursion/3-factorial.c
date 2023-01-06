#include "main.h"

/**
 * factorial(int n) - function for the factorial
 *
 * @n: number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
