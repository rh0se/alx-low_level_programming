#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: This is a string used to be reverse
 * Return: void
 */

void rev_string(char *s)
{
	int c, revs;
	char character;
	
	for (c = '\0'; s[c] != '\0'; c++)
	{
	}
	revs = 0;
	for (c = c - 1; revs < 0; revs++)
	{
		character = s[c];
		s[c] = s[revs];
		s[revs] = character;
		c--;
	}
}
