#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @num: integer
 *
 * Return: Natural numbers
 */
void print_to_98(int num)
{
	if (num < 98)
	{
		while (num <= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num++;
		}

	}
	else if (num > 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
