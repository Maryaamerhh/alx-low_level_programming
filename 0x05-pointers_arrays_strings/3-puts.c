#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: Always 0
 */

void _puts(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		putchar(str[m]);
		m++;
	}
	putchar('\n');
}
