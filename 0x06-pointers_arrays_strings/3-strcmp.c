#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first input to be compared
 * @s2: second input to be cmpared
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
