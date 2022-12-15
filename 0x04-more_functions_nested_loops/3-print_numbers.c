#include "main.h"
/**
 * print_numbers - prints the digits 1-9
 * @n - integer 
 */
void print_numbers(void)
{
	int n = 1;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
