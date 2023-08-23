#include "main.h"

/**
 * _strcmp - compire pointer to two string
 * @s1: a pointer to first string to be combered
 * @s2: a pointer to second string to be compared
 * Return: if str1 < str2, the negative difference of
 * the of the first unmatched charackter.
 * if str1 == str2, 0.
 * if str1 > str2,the positive diffrence of thebfirst unmatched charackter.
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
