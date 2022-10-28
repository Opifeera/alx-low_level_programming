#include <stdio.h>

/**
  * main - prints all lower case characters except '' and 'e'
  *
  * Return: Always (0)
  */
int main(void)
{
	char l_case;

	l_case = 'a';
	while (l_case <= 'z')
	{
		if (l_case != 'q' && l_case != 'e')
		{
			putchar(l_case);
		}
		l_case++;
	}
	putchar('\n');
	return (0);
}
