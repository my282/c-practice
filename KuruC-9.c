#include <stdio.h>

int main (void){
    for(int m=1; m <= 9; m++){
        for (int n=1; n <= 9; n++){
            printf("%3d",n*m);
        } 
        printf("\n");
    }
    return 0;
}