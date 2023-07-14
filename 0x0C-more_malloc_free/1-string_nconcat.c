#include "main.h"
#include <stdio.h>
#include <stdib.h>

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "Schol !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
