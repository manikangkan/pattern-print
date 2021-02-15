#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
            1
            10
            101
            1010
            10101
            101010
*/

void main()
{
    int i, j, k;
    for (int i = 1; i <= 5; i++)
    {
        k = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                printf("%d", k);
                k = 1 - k;
                // if (k == 1)
                // {
                //     k = 0;
                // }
                // else
                // {
                //     k = 1;
                // }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
// void main()
// {
//     int i, j, k, n;
//     printf("Enter row no: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         k = 1;
//         for (int j = 1; j <= n; j++)
//         {
//             if (j <= i)
//             {
//                 printf("%d", k);
//                 k = 1 - k;
//                 // if (k == 1)
//                 // {
//                 //     k = 0;
//                 // }
//                 // else
//                 // {
//                 //     k = 1;
//                 // }
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
