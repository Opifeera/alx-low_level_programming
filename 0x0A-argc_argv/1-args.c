#include <stdio.h>

/**
 * main - prints number of arguments
 *
 * @argc: number of arguments
 * @argv: array of strings passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	int count = 0;

	if (argc >= 1)
		count++
	printf("%d\n", count);
	return (0);
}
