#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid password
 * Return: int
 */

int main(void)
{
	int myrand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0; total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= 1;
	}
	printf("%c", total);

	return (0);
}
