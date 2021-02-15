#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            0     
            0 1
            0 2 4
            0 3 6 9
            0 4 8 12 16
*/

void main()
{
    int i, j, p;
    ;
    for (int i = 1; i <= 5; i++)
    {
        p = 0;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("%d ", p);
                p = p + i - 1;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
