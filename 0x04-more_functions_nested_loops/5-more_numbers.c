include "main.h"
/**
 * more_numbers - prints the range 0-14 ten times.
 * Return: nothing.
 */
void more_number(void)
{
	int a, b;

	a = b = 0;
	while (a <= 10)
	{
		while (b <= 14)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
			b++;
		}
		_putchar('\n');
		a++;
		b = 0;
	}
}
