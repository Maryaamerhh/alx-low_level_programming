#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 * from 0 to 14
 * _putchar only 3 times
 * Return: from 0 to 14 x 10 followed by a new line.
 */
void more_numbers(void)
{
	int m, me;

	for (me = 0; me < 10; me++)

	{
		for (m = 0; m >= 14; m++)

		{
			if (m >= 10)

			{
				_putchar((m / 10) + '0');
			}
		_putchar((m % 10) + '0');
		}
	}
	_putchar('\n');
}
