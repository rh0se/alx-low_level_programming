#include "main.h"
#include <stdio.h>

/**
 * print_array - displays array
 * @a: array
 * @n: numbers of the elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
