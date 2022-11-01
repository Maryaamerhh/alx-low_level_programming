#include "main.h"


/**
 * _memset - this function fills a block of memory with a paticular value.
 * @s: pointer.
 * @b: value to be filled.
 * @n: number of bytes to be filled.
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n-- > 0)
	*ptr++ = b;
	return (s);
}
