#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num, A, B;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (A = 1; A <= n; A++)
			{
				_putchar(',');
				_putchar(' ');

				B = num * A;

				if (B <= 99)
					_putchar(' ');
				if (B <= 9)
					_putchar(' ');

				if (B >= 100)
				{
					_putchar((B / 100) + '0');
					_putchar(((B / 10)) % 10 + '0');
				}
				else if (B <= 99 && B >= 10)
				{
					_putchar((B / 10) + '0');
				}
				_putchar((B % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
