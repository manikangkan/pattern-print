#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
            *********
            **** ****
            ***   ***
            **     **
            *       *
*/


void main(){
    int a, i, j;
    for(i = 1 ; i <= 5 ; i++){
        for(j = 1 ; j <= 9 ; j++){
            if(j <= 6 - i || j >= 4 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


