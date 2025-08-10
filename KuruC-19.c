#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[256];
    int age;
    int sex;
}People;

void input(People* data,int a);
void output(People data);

int main(void){
    int datasize = 10;
    int count = 0; //人数カウント用
    int j;
    People *data;
    data = (People*)malloc(sizeof(int)*datasize);
    while(1){
        input(&data[count],j);
        if(data[count].age == -1);
            break;
        count++;
    }
}

void input(People* data,int n){
    printf("%d人目の情報の入力を行います\n",n+1);
    printf("年齢を入力してください:");
    scanf("%d", &(*data).age);
    printf("名前を入力してください:");
    scanf("%s", (*data).name);
    printf("性別を「男性」「女性」「それ以外」「無回答」のいずれかで入力してください:");
    scanf("%s", &(*data).sex);
    printf("%d人目の情報の入力が完了しました\n",n+1);
}