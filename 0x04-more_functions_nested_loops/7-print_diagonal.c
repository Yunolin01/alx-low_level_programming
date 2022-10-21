#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	if (x = 0; x < n; x++)
	{
		if (y =0; y < x; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
