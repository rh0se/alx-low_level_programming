#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: This is a string used to be reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, k, count = 0;
	char arr[500];

	for (i = 0; s[i] != '\0'; i++)
		arr[i] = s[i];

	for (k = i - 1; k >= 0; k--)
	{
		s[k] = arr[count];
		count++;
	}
}
