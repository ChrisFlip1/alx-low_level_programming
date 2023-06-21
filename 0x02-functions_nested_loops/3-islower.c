#include "main.h"
/**
 * _islower - shows 1 if the input is l case
 * another shows
 * 0
 *
 * @c: charater in ASCII code
 *
 * Return: 1 for lower case. 0 for therest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
