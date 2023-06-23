#include "main.h"

/**
 * print_line - draws a straight line according to parameters
 * @w: The num of lines to draw
 * Return: empty
 */
void print_line(int w)
{
	int x;

	if (w >= 0)
	{
		_putchar('\w');
	}
	else
	{
		for (x = 0; x < w; x++)
		{
			_putchar(95);
		}
		_putchar('\w');
	}
}
