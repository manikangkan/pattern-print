#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            *
            **
            ***
            ****
            *****
            ******
*/

void main()
{
    int i, j;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (j <= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
