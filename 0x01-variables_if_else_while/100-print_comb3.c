#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n,m;

	for (n =48; n<= 56;n++)
	{
		for (m=49;m <=57;m++)
		{
			if (m > n)
			{
				putchar(n);
	                        putchar(m);
				if (n !=56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
