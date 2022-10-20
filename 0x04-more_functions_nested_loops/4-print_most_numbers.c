#include "main.h"

/**
 * print_most_numbers - a function that prints from 0 to 9
 *
 * Return: from 0 to 9 with the exeption of 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		if ((m == 2) && (m == 4))
			continue;
		else
				_putchar(m + '0');
	}
	_putchar('\n');
}
