#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a); // 整数型の変数aに値を入力する
    switch(a){
        case 1:
            printf("aは1です。\n");
            break;
        case 2:
            printf("aは2です。\n");
            break;
        case 3:
            printf("aは3です。\n");
            break;
        default:
            printf("aは1, 2, 3のいずれでもありません。\n");
    }

    return 0;
}
