#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times with _putchar
 * followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int num = 0;

	while (num < 10)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
			_putchar(c);
		}
		_putchar(10);
		num++;
	}
}
