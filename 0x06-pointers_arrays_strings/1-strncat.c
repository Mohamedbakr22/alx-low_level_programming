#include "main.h"

/**
 * _strncat - concatenates two string using
 * at most an inputted number of bytes from src
 * @dest: the string to be appened upon
 * @src: the string to be appened to dest
 * @n: the number of bytes from src  to be appened to dest
 * Return: a pointr to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
