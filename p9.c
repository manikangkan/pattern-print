#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
            ABCDCBA
            ABC CBA
            AB   BA
            A     A
*/


void main(){
    int a, i, j;
    char k;
    for(i = 1 ; i <= 4 ; i++){
        k = 'A';
        for(j = 1 ; j <= 7 ; j++){
            if(j <= 5 - i || j >= 3 + i){
                printf("%c", j<4 ? k++ : k--);
            }
            else{
                printf(" ");
                j == 4 ? k-- : k;
            }
        }
        printf("\n");
    }
}



