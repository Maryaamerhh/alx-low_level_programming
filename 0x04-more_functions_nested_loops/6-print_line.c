#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int spc;

	if (n > 0)
	{
		for (spc = 0; spc < n; spc++)
			_putchar('_');
	}

	_putchar('\n');
}
