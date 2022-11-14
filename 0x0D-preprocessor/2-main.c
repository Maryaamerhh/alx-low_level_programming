#include <stdio.h>

/**
 * main - using the main function.
 * Description: A function that prints the name of file it was compiled from
 * Return: Always 0.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
