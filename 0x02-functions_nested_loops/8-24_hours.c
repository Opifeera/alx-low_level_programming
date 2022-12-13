#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hour, min;

	while (hour < 24)
	{
		while (min < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar ((min % 10) + '0');
			_putchar('\n');
			min++
		}

		hour++;
	}
}
