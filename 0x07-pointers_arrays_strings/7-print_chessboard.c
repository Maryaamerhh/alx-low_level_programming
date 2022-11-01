#include "main.h"

/**
 * print_chessboard - this function Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int d, b;

	for (d = 0; a[d][7]; d++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[d][b]);

		_putchar('\n');
	}
}
