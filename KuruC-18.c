#include <stdio.h>
int Olympic(int);
int year;

enum{
    Olympic_Summer_scheduled,
    Olympic_Summer_done,
    Olympic_winter_scheduled,
    Olympic_winter_done,
    Olympic_not_scheduled,
    Olympic_not_done,
};

int main (void){
    int id;
    printf("西暦年を入力してください");
    scanf("%d",&year);
    id=Olympic(year);
    switch(id){
        case Olympic_Summer_scheduled:
        printf("%d年は夏季オリンピック開催予定です",year);
        break;

        case Olympic_Summer_done:
        printf("%d年は夏季オリンピックが開催されました",year);
        break;

        case Olympic_winter_scheduled:
        printf("%d年は冬季オリンピック開催予定です",year);
        break;

        case Olympic_winter_done:
        printf("%d年は冬季オリンピックが開催されました",year);
        break;
        
        case Olympic_not_scheduled:
        printf("%d年はオリンピックが開催される予定はありません",year);
        break;

        case Olympic_not_done:
        printf("%d念はオリンピックは開催されていません",year);
        break;
    }
}

int Olympic(int year){
    if(year % 4 == 0){
            if(year > 2024){
                    return Olympic_Summer_scheduled;
            }else{
                    return Olympic_Summer_done;
            }
                /*mod4=0 夏季オリンピック*/
    }else if(year % 4 == 2){
            if(year > 2024){
                return Olympic_winter_scheduled;
            }else{
                return Olympic_winter_done;
            }/*mod4 = 2 冬季オリンピック*/
    }else{
            if(year > 2024){
                return Olympic_not_scheduled;
            }else{
                return Olympic_not_done;
            }
                        /*オリンピック開催せず*/
    }            
}
