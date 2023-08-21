#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: the first integr to be swaped
 * @b: the second intger to be swaped
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swap the value of two integers*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
