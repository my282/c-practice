#include <stdio.h>
#define repeat(n) for(int i = 0; i < n; i++)
int array[10];
int count = sizeof(array) / sizeof(array[0]);

int main (void){
    printf("数を一つ入力するごとに改行してください\n");

    repeat(count){    
        scanf("%d",&array[i]);
        printf("%d個目:%d\n",i,array[i]);

    }
       
    
    for (int i=0; i<count; i++){
        printf("%d個目:%d\n",i,array[count-1-i]);
    }

    return 0;
    
}