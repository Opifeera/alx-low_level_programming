#include <stdio.h>

/**
 * main - prints its name
 *
 * @argc: counts arguments
 * @argv: array of strings
 *
 * Return: command name
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
