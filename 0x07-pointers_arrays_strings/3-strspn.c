#include "main.h"
#include <stdio.h>

/**
 * main - this function checks the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char *s = "hello, world";
char *f = "oleh";
unsigned int n;

n = _strspn(s, f);
printf("%u\n", n);
return (0);
}
