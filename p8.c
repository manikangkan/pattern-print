#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
               1
              121
             12321
            1234321
*/



void main(){
    int a, k, i, j;
    for(i = 1 ; i <= 4 ; i++){
            k = 1;
        for(j = 1 ; j <= 7 ; j++){
            if(j >= 5 - i && j <= 3 + i){
                printf("%d", j<4?k++:k--);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}


