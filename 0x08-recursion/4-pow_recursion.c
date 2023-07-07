#include "main.h"
/**
 * _pow_recursion - Return the value of x raised to y
 * @x: value to multiple
 * @y: times to multiple value
 * Return: multipled value y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
