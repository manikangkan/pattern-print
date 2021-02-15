#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            A
            BA
            CBA
            DCBA
*/

void main()
{
    int i, j;
    char a;
    for (int i = 1; i <= 4; i++)
    {
        // a = 64 + i;
        a = 'A';
        a = a + i - 1;
        for (int j = 1; j <= 4; j++)
        {
            if (j <= i)
            {
                printf("%c", a--);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
