#include "main.h"

/**
 * _islower - Check for lowercase character
 * @c: the charackter to be checked
 * Rutern: 1 for lowercase charackter or 0 for anything else
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
