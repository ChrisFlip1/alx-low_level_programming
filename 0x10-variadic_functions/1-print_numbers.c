#include "variables_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print_numbers followed by new line
 * @separator: the string to be printed btn numbs
 * @n: num of int passed to string
 * @...: variable num to printed
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
