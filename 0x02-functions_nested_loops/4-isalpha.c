#include "main.h"
/**
 * _isalpha - show 1 if the input is
 * letter Anothecases, show 0
 *
 * @c: The character is ASCII code
 *
 * Return: 1 fir letters. 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

