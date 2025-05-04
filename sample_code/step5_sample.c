#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);

    if(a > 0){
        printf("aは正の整数です。\n");
    } else if(a == 0){
        printf("aは0です。\n");
    } else {
        printf("aは負の整数です。\n");
    }
    return 0;
}
