#include <stdio.h>

/**
 * _strlen - return the lenght of string
 * @str: the string to get the lenght of
 * Return: the lenth of the @str
 */

size_t _strlen(const char *str)

{
	size_t lenght = 0;

	while (*str++)
	lenght++;
	return (lenght);
}
