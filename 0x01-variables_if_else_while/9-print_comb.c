#include <stdio.h>

/**
  * main - prints single digit numbers separated by ,
  *
  * Return: Always (0)
  */
int main(void)
{
	int dig;

	for (dig = '0'; dig <= '9'; dig++)
	{
		putchar(dig);
		if (dig != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
