#include"main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char *word = "_putchar";

	while (*word)
	{
		_putchar(*word);
		word++;
	}
	_putchar('\n');

	return (0);
}
