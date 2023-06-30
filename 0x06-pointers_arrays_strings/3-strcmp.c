#include "main.h"
/**
 * strcmp - compares pointer to two string
 * @s1: a pointer to the first string to b compared
 * @s2: a pounter to the second string to be compared
 * Return: if s1 < s2 the negative diff is unmatched
 * if s1 == s2, 0.
 * if s1 > s2 the positive diff is unmatched
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
