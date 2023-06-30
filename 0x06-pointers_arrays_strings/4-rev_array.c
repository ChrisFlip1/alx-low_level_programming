#include "main.h"
/**
 * reverse _array - reverses the content of an array of an array of integers.
 * @a: the array of integer to be reversed
 * @n: number of element
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
