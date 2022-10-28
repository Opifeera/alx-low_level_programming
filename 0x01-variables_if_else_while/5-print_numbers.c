#include <stdio.h>

/**
  * main - prints all numbers from 0 to 9
  *
  * Return: Always (0)
  */
int main(void)
{
	int num;

	num = 0;
	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
