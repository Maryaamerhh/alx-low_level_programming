#include <stdio.h>

/**
 * main - printing all single digits od base 10 from 0 using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	putchar('\n');

	return (0);
}

