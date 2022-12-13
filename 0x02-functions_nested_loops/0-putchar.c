#include "main.h"
/**
 * main - prints _putchar followed by a new line
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(c[num]);
	}
	_putchar(10);
	return (0);
}
