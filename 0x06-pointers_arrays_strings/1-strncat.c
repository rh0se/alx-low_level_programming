#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * but add inputted number of bytes
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
