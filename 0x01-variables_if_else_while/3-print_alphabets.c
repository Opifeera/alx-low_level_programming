#include <stdio.h>

/**
  * main - prints all lower case characters and then all upper case characters
  *
  * Return: Always (0)
  */
int main(void)
{
	char l_case, u_case;

	l_case = 'a';
	u_case = 'A';

	/*loop for lower case*/
	while (l_case <= 'z')
	{
		putchar(l_case);
		l_case++;
	}
	/*loop for upper case*/
	while (u_case <= 'Z')
	{
		putchar(u_case);
		u_case++;
	}
	putchar('\n');
	return (0);
}
