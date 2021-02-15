#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
                  1   
                 212
                32123
               4321234
*/

void main()
{
    int i, j, k = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
                printf("%d", j < 4 ? k-- : k++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
// void main()
// {
//     int i, j, k;
//     for (i = 1; i <= 4; i++)
//     {
//         k = i;
//         for (j = 1; j <= 7; j++)
//         {
//             if (j >= 5 - i && j <= 3 + i)
//                 printf("%d", j < 4 ? k-- : k++);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }