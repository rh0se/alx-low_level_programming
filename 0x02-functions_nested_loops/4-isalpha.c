#include "main.h"
/**
 * _isapha - checks for alphabetic character
 * return 1 if letter is lowercase or uppercase
 * return 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
