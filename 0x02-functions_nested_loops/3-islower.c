#include "main.h"

/**
 * _islower - checks for lowercase character.
 * Description: using the _islower function
 * @c: the int that will be used for argument of function
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
