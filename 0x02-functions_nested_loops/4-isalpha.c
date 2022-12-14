#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Return 1 if letter c is lowercase or uppercase
 * Return 0 otherwise
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
