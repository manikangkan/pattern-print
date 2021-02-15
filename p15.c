#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
                   1
                  12
                 123
                1234
                 123
                  12
                   1
*/

void main()
{
    int i, j, k = 0, l;
    for (i = 1; i <= 7; i++)
    {
        l = 1;
        i <= 4 ? k++ : k--;
        for (j = 1; j <= 4; j++)
        {
            if (j >= 5 - k)
            {
                printf("%d", l++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
