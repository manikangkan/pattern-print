#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
               1   
              12A
             123AB
            1234ABC
*/

void main()
{
    int i, j;
    char k;
    for (i = 1; i <= 4; i++)
    {
        k = '1';
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                if (j == 5)
                    k = 'A';
                printf("%c", k++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
