#include <stdio.h>

/**
 * main - prints all alphabets in lowercase with the exeption of e and q
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);
}

