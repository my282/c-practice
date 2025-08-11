#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[256];
    int age;
    int sex;//男性-１　女性-２　とする
}people;

people* data;

void input(people data[], int count);
void output(people data[], int count);

int main(void){
    int i = 10; //iを配列の数とする
    int j = 2; //10*jだけメモリの確保する数を増やす

    data = malloc(sizeof(people)*i);
    int count = 0; //人数カウント用
    while(1){
        input(data,count);
        if(data[count].age == -1){
            i = count;
            break;
        } 
        count++;
        if(count == i){
            data = realloc(data,sizeof(people)*(10*j));
            j++;
        } 
    }
    for (count = 0;count < i; count++){
       output(data,count);
    }

    free(data);
    
}

void input(people data[], int count){
    printf("名前を入力してください\n");
    scanf("%s",data[count].name);
    printf("年齢を入力してください\n");
    scanf("%d",&data[count].age);
    printf("性別を入力してください(男性-１ 女性-２)\n");
    scanf("%d",&data[count].sex);
}

void output(people data[], int count){
    printf("名前：%s\n",data[count].name);
    printf("年齢：%d\n",data[count].age);
    printf("性別：%d\n",data[count].sex);
}