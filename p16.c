
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            \ * * * * * /
            * \ * * * / *
            * * \ * / * *
            * * * \ * * *
            * * / * \ * *
            * / * * * \ *
            / * * * * * \
*/

void main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == j)
                printf(" \\");
            else if (j == 8 - i)
                printf(" /");
            else
                printf(" *");
        }
        printf("\n");
    }
}
