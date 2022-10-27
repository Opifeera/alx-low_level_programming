#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - program recognises a positive and negative
 *
 * Return: prints a number for either zero, is positive or a negative
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
