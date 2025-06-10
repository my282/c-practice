#include <stdio.h.>

int main (void){
        int year;
        printf("任意の西暦年を入力してください");
        scanf("/d", &year);
        if(year % 4 == 0){
                if(year > 2024)
                printf("/d年は夏季オリンピック開催予定です", year );
                if(year <= 2024)
                printf("/d年は夏季オリンピックが開催されました", year);
        }
        if(year % 4 == 2){
                if(year > 2024)
                printf("/d年は冬季オリンピック開催予定です", year );
                if(year <= 2024)
                printf("/d年は冬季オリンピックが開催されました", year);
        }
        if(year % 4 != 0 && year % 4 != 2){
                if(year > 2024)
                printf("/d年はオリンピック開催が開催される予定はありません", year );
                if(year <= 2024)
                printf("/d年はオリンピックは開催されていません", year);
        }
        return 0;
}
 
