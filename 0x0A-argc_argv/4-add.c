#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * numchk - checks whether input is a number
 *
 * @str: array string
 *
 * Return: always 0
 */
int numchk(char *str)
{
	unsigned int sum = 0;

	while (sum < strlen(str))
	{
		if (!isdigit(str[sum]))
		{
			return (0);
		}
		sum++;
	}
	return (1);
}

/**
 * main - calls numchk
 *
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: addition
 */
int main(int argc, char *argv[])
{
	int count = 1, str_int, sum = 0;

	while (count < argc)
	{
		if (numchk(argv[count]))
		{
			str_int = atoi(argv[count]);
			sum += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
