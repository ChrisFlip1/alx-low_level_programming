#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @p: the numer to be checked
 * Return: 1 for digit character or 0 for anthing else
 */
int _isdigit(int p)
{
	if (p >= 48 && p <= 57)
	{
		return (1);
	}
	return (0);
}
