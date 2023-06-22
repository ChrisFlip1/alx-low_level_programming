#include "main.h"
/**
 * print_last_digits - Print lst digits
 *
 * @n: input number as an integer
 *
 * Return: Last digits
 */
int print_last_digits(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

