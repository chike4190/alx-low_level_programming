#include "main.h"
/**
 * print_alphabet_x10 - Prints lowercase Alphabets x10
 */
void print_alphabet_x10(void)
{
	int w = 0;
	int j;

	while (w++ <= 9)
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('/n');
}
