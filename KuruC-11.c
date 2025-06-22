#include <stdio.h>
int Olympic(int);
int year;

int main (void){
    int id;
    printf("西暦年を入力してください");
    scanf("%d",&year);
    id=Olympic(year);
    switch(id){
        case 0:
        printf("%d年は夏季オリンピック開催予定です",year);
        break;

        case 1:
        printf("%d年は夏季オリンピックが開催されました",year);
        break;

        case 2:
        printf("%d年は冬季オリンピック開催予定です",year);
        break;

        case 3:
        printf("%d年は冬季オリンピックが開催されました",year);
        break;
        
        case 4:
        printf("%d年はオリンピックが開催される予定はありません",year);
        break;

        case 5:
        printf("%d念はオリンピックは開催されていません",year);
        break;
    }
}

int Olympic(int year){
    if(year % 4 == 0){
                if(year > 2024){
                        return 0;
                }else{
                        return 1;
                }
                /*mod4=0 夏季オリンピック*/
    }else if(year % 4 == 2){
             if(year > 2024){
                return 2;
            }else{
                return 3;
            }/*mod4 = 2 冬季オリンピック*/
    }else{
            if(year > 2024){
                                return 4;
                        }else{
                                return 5;
                        }
                        /*オリンピック開催せず*/
    }            
}
