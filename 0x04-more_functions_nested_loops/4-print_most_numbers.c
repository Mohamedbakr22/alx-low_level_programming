 #include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * Description: print the number excluding 2 to 4
 * Return: the numbers since 0 to 9
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
