#include <stdio.h>

/*
                        *
                       **
                      ***
                      |**
                    * | *
                    **|
                    ***
                    **
                    *
*/

void main()
{
    int i, j, k;

    for (i = 1; i <= 15; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i <= 5)
            {
                if (j >= 10 - i)
                    printf("*");
                else
                    printf(" ");
            }
            else if (i <= 10)
            {
                k = 0;
                if (j == 5)
                {
                    printf("|");
                    k = 1;
                }
                if (j <= (i - 5 - 1))
                {
                    printf("*");
                    k = 1;
                }
                if (j >= i)
                {
                    printf("*");
                    k = 1;
                }
                if (k == 0)
                    printf(" ");
            }
            else if (i <= 15)
            {
                if (j <= (15 + 1 - i))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
// void main()
// {
//     int n, i, j, k;
//     printf("Enter value of n : ");
//     scanf("%d", &n);

//     for (i = 1; i <= 3 * n; i++)
//     {
//         for (j = 1; j <= 2 * n - 1; j++)
//         {
//             if (i <= n)
//             {
//                 if (j >= 2 * n - i)
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//             else if (i <= 2 * n)
//             {
//                 k = 0;
//                 if (j == n)
//                 {
//                     printf("|");
//                     k = 1;
//                 }
//                 if (j <= (i - n - 1))
//                 {
//                     printf("*");
//                     k = 1;
//                 }
//                 if (j >= i)
//                 {
//                     printf("*");
//                     k = 1;
//                 }
//                 if (k == 0)
//                     printf(" ");
//             }
//             else if (i <= 3 * n)
//             {
//                 if (j <= (3 * n + 1 - i))
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }
