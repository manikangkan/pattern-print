#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
                    1    
                   A B
                  1 2 3
                 A B C D
                1 2 3 4 5
*/

void main()
{
    int a, k, i, j;
    char l, m;

    for (i = 1; i <= 5; i++)
    {
        k = 1;
        l = '1';
        m = 'A';
        for (j = 1; j <= 10 - 1; j++)
        {
            if (j >= 6 - i && j <= 4 + i && k)
            {
                printf("%c", i % 2 == 0 ? m++ : l++);
                k = 0;
            }

            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
}
// void main()
// {
//     int a, k, i, j, n;
//     char l, m;

//     printf("Enter col no: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         k = 1;
//         l = '1';
//         m = 'A';
//         for (j = 1; j <= 2 * n - 1; j++)
//         {
//             if (j >= n + 1 - i && j <= n - 1 + i && k)
//             {
//                 printf("%c", i % 2 == 0 ? m++ : l++);
//                 k = 0;
//             }

//             else
//             {
//                 printf(" ");
//                 k = 1;
//             }
//         }
//         printf("\n");
//     }
// }
