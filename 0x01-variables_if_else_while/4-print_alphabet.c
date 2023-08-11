#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        char alp[26] = "abcdfghijklmnoprstuvwxyz";
        int i;

        for (i = 0;i < 26; i++)
        {
                putchar(alp[i])
        }
        putchar('\n');
        return (0);
}
