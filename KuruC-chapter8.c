#include <stdio.h>

int main(void){

    int month;
    printf("月を入力してください(1~12の半角数字)\n");
    scanf("%d", &month);
    getchar();
    
    switch (month){

        case 1:
            printf("%d月の旧暦は睦月です\n", month);
            break;
        case 2:
            printf("%d月の旧暦は如月です\n", month);
            break;
        case 3:
            printf("%d月の旧暦は弥生です\n", month);
            break;
        case 4:
            printf("%d月の旧暦は卯月です\n", month);
            break;
        case 5:
            printf("%d月の旧暦は皐月です\n", month);
            break;
        case 6: 
            printf("%d月の旧暦は水無月です\n", month);
            break;
        case 7:
            printf("%d月の旧暦は文月です\n", month);
            break;
        case 8:
            printf("%d月の旧暦は葉月です\n", month);
            break;
        case 9:
            printf("%d月の旧暦は長月です\n", month);
            break;
        case 10:
            printf("%d月の旧暦は神無月です\n", month);
            break;
        case 11:
            printf("%d月の旧暦は霜月です\n", month);
            break;
        case 12:
            printf("%d月の旧暦は師走です\n", month);
            break;
        default:
            printf("話聞いてた？\n");
            break;



    }
    printf("何かキーを押して終了");
    getchar();
    return 0;
}