#include "main.h"

/**
 * reverse_array - reverse the content of an arry of integers
 * @a: the array of integers to be reversed
 * @n: number of element of array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
