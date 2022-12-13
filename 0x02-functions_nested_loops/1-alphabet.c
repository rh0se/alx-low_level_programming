#include "main.h"
/** print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (c = 'a';c <= 'z';c++)
	{
		_putchar(c);
	}
	_putchar(10);
}	
