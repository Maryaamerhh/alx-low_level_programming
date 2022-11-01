#include "main.h"

/**
 * *_memcpy - this function copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q] = src[q];
	}
	return (dest);
}
