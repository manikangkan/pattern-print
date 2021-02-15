#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
                        A
                       CB
                      FED
                     JIHG
                    ONMLK
*/

void main()
{
    int i, j;
    int a = 64;
    for (i = 1; i <= 5; i++)
    {
        a = a + 2 * (i - 1) + 1;
        for (j = 1; j <= 5; j++)
        {
            if (j >= 6 - i)
            {
                printf("%c", a--);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
