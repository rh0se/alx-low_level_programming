#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = n * -1;
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
}
