#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
               A
              ABA
             ABBCBA
            ABCDCBA
*/

void main()
{
    int i, j;
    char k;
    for (i = 1; i <= 4; i++)
    {
        k = 'A';
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
                printf("%c", j < 4 ? k++ : k--);
            else
                printf(" ");
        }
        printf("\n");
    }
}
