#include "main.h"

/**
 * _islower - check for alphabetic character
 * @c: the character to be checked
 * Return: 1 foralphabetic character or 0 for anything else
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
