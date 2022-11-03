#include "main.h"

/**
 * factorial - this function returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: n
 */
int factorial(int n)
{
	int answer = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	answer *= factorial(n - 1);

	return (answer);
}
