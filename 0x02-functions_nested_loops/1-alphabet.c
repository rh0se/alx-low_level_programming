#include "main.h"
/**
 * print_alphabet- Print alphabet in lowercase using only `_putchar`
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar(10);
}
