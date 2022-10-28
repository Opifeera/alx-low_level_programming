#include <stdio.h>

/**
  * main - prints all hexadecimal numbers
  *
  * Return: Always (0)
  */
int main(void)
{
	int hexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
		putchar(hexa);
	for (hexa = 'a'; hexa <= 'f'; hexa++)
		putchar(hexa);

	putchar('\n');
	return (0);
}
