#include <stdio.h>

/**
 * main - prints numbers from 0 to 100 with Fizz
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char fi[] = "Fizz";
	char bu[] = "Buzz";
	char fibu[] = "FizzBuzz";

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
			printf("%s ", bu);
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("%s ", fibu);
		else if (num % 3 == 0)
			printf("%s ", fi);
		else if (num % 5 == 0)
			printf("%s ", bu);
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);

}
