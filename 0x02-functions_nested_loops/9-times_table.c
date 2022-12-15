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
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(times + '0');
			if (times > 9)
			{
				_putchar(times /10 + '0');
				_putchar(times % 10 + '0');
			}
			_putchar(',');
			t++;
		}
		_putchar('\n');
	}
}
