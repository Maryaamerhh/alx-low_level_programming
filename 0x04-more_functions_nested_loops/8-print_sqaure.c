#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int lnt, brth;

	if (size > 0)
	{
		for (lnt = 0; lnt < size; lnt++)
		{
			for (brth = 0; brth < size; brth++)
				_putchar('#');

			if (lnt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
