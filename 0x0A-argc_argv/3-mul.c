#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multplies two numbers
 *
 * @argc: counts arguments
 * @argv: strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", (i * j));
		return (0);
	}
	printf("Error\n");
	return (1);
}
