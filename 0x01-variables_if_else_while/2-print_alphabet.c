#include <stdio.h>

/**
  * main - prints alphabetic letters in lower case
  *
  * Return: returns 0
  */
int main(void)
{
	char low_case = 'a';

	while (low_case <= 'z')
	{
		putchar(low_case);
		low_case++;
	}
	putchar('\n');
	return (0);
}
