#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: This is a string used to be reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, length;

	length = _strlen(s) - 1;
	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}
