#include <stdio.h>

int main (void){
    char fn[20]; /*名前*/
    char ln[20]; /*苗字*/
    printf("苗字を入力してください\n");
    scanf("%s", ln);

    printf("名前を入力してください\n");
    scanf("%s", fn);

    printf("%s %s",ln, fn); /*苗字→名前の順に表示*/
}