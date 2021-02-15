#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
                *
              * * *
             * * * *
            * * * * *
*/

// void main(){
//     int a, k, i, j;
//     for(i = 1 ; i <= 5 ; i++){
//         k = 1;
//         for(j = 1 ; j <= 9 ; j++){
//             if(j >= 6 - i && j <= 4 + i && k){
//                 printf("*");
//                 k = 0;
//             }

//             else{
//                 printf(" ");
//                 k = 1;
//             }
//         }
//         printf("\n");
//     }
// }

//Using single loop
int flag = 1;
void main()
{
    for (int i = 1, k = 0; i <= 7; i++)
    {
        if (i < 4 - k)
            printf(" ");
        else
        {
            flag ? printf("*") : printf(" ");
            flag = 1 - flag;
        }
        if (i == 4 + k)
        {
            k++;
            printf("\n");
            if (i == 7)
                break;
            i = 0;
            flag = 1;
        }
    }
}