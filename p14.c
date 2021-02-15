
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            ******
            *****
            ****
            ***
            **
            *
*/

void main()
{
    int i, j, k = 0;
    for (i = 1; i <= 5; i++)
    {
        k = 5 - i;
        for (j = 1; j <= 5; j++)
        {
            if (j <= 5 + 1 - i)
                printf("%d ", k--);
            else
                printf(" ");
        }
        printf("\n");
    }
}
