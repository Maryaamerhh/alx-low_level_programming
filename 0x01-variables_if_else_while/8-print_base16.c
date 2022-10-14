#include <stdio.h>

/**
 * main - printing hexadecimal in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;
	char alphabet;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	for (alphabet = 'a' ; alphabet <= 'f' ; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
