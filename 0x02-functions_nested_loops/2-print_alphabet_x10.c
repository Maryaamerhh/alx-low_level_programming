#include "main.h"

/**
 * print_alphabet_x10 - to print lowercase 10 times.
 * Description: function to print lowercase 10 times.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter, i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a' ; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}


