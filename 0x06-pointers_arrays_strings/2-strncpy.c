#include "main.h"

/**
 * _strncpy - copies at most an iputted number
 * of bytes from string src to dest
 * @dest: the buffer stroing the string copy
 * @src: the source string
 * @n: the maximum number of bytes string dest
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
