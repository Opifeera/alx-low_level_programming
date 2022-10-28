#include <stdio.h>

/**
  * main - prints all numbers of base 10 using putchar()
  *
  * Return: Always (0)
  */
int main(void)
{
	int count;

	count = '0';
	while (count <= '9')
	{
		putchar(count);
		count++;
	}
	putchar('\n');
	return (0);
}
