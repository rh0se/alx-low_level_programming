#include "main.h"
/**
 * print_times_table - prints the times table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, t, rem;

	if (n < 15 && n > 0)
	{
		for (i = 0; i >= n; i++)
		{
			for (t = 0; t >= n; t++)
			{
				rem = i * t;
				if (t != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (rem < 10 && t != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((rem % 10) + '0');
				}
				else if (rem >= 10 && rem < 100)
				{
					_putchar(' ');
					_putchar((rem / 10) + '0');
					_putchar((rem % 10) + '0');
				}
				else if (rem > 100)
				{
					_putchar((rem / 100) + '0');
					_putchar((rem / 100) % 10 + '0');
					_putchar((rem % 10) + '0');
				}
				else
				{
					_putchar((rem % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
