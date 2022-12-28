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
	int indesx = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];
	
	return (dest);
}
