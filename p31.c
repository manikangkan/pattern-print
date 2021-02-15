#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
                *   *
                 * *
                  *
                 * *
                *   *
*/

void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == i || j == 6 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// void main()
// {
//     int i, j, n;

//     printf("Enter col no: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             if (j == i || j == n + 1 - i)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
