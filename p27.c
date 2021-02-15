#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            1         
            3 * 2
            4 * 5 * 6
            10 * 9 * 8 * 7
            11 * 12 * 13 * 14 * 15
*/

void main()
{
    int i, j, k = 0, flag, l;
    for (int i = 1; i <= 5; i++)
    {
        l = i % 2 == 0 ? k + i : k + 1;
        flag = 1;
        for (int j = 1; j <= 9; j++)
        {
            if (j <= 2 * i - 1)
            {
                if (flag == 1)
                {
                    printf("%d ", i % 2 == 0 ? l-- : l++);
                    k++;
                }
                else
                {
                    printf("* ");
                }
                flag = 1 - flag;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
