#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 * Return: Nothing.
 */
void times_table(void)
{
	int n, t, times, rem;

	for (n = 0; n < 10; n++)
	{
		t = 0;
		while (t < 10)
		{
			times = n * t;
			rem = times / 10;
			if (rem < 1 && t != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (rem >= 1)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (times > 9)
			{
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
			}
			else
			{
				_putchar(times + '0');
			}
			t++;
		}
		_putchar('\n');
	}
}
