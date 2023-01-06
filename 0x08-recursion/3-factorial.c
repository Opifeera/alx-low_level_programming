#include "main.h"

/**
 * factorial - function for the factorial
 *
 * @n: number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	else
		return (factorial(n - 1));
}
