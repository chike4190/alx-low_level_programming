#include <stdio.h>

/**
 * reset_to_98 - take a pointer and update it to 98
 * @n: a pointer
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int n;

	n = 402;
	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
	return (0);
}
