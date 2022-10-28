#include <stdio.h>

/**
  * main - prints lower case characters in reverse
  *
  * Return: Always (0)
  */
int main(void)
{
	char lr_case = 'z';

	while (lr_case >= 'a')
	{
		putchar(lr_case);
		lr_case--;
	}
	putchar('\n');
	return (0);
}
