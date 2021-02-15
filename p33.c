#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            1     
            6 2
            10 7 3
            13 11 8 4
            15 14 12 9 5
*/

void main()
{
    int i, j, k = 1, p;
    ;
    for (int i = 1; i <= 5; i++)
    {
        p = k;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("%d ", p);
                p = p - (5 + j - i);
            }
            else
                printf(" ");
        }
        k = k + 6 - i;
        printf("\n");
    }
}
