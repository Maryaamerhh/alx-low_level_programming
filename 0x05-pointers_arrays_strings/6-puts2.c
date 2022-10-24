#include "main.h"

/**
 * puts2 - prints first character of a string
 * @str: string
 * Return: Always 0
 */

void puts2(char *str)
{
	int z;

	z = 0;
	while (str[z] != '\0')
	{
		if (z % 2 == 0)
			putchar(str[z]);
		z++;
	}
	putchar('\n');
}
