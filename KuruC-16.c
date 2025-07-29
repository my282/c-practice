#include <stdio.h>

struct PI{
    int  age;
    char name[256];
    char sex[256];
};
/*年齢、名前、性別の構造体を宣言*/

struct PI data[3];

void input(int i){
    printf("%d人目の情報の入力を行います\n",i+1);
    printf("年齢を入力してください:");
    scanf("%d", &data[i].age);

    printf("名前を入力してください:");
    scanf("%s", &data[i].name);

    printf("性別を「男性」「女性」「それ以外」「無回答」のいずれかで入力してください:");
    scanf("%s", &data[i].sex);

    printf("%d人目の情報の入力が完了しました\n",i+1);
}

void output(int i){
    printf("%d人目\n",i);
    printf("年齢:%d\n",data[i].age);
    printf("名前:%s\n",data[i].name);
    printf("性別:%s\n",data[i].sex);
}

int main(void){
    int i;
    for(i = 0; i < 3; i++){
        input(i);
    }
    for(i = 0; i < 3; i++){
        output(i);
    }
    
    return 0;
}