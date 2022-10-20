#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int o, p;

	if (n > 0)
	{
		for (o = 0; o < n; o++)
		{
			for (p = 0; p < o; p++)
				_putchar(' ');
			_putchar('\\');

			if (o == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
