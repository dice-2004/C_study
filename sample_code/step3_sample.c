#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a); // 整数型の変数aに値を入力する
    char d;
    scanf(" %c", &d); // 文字型の変数dに値を入力する

    double c;
    scanf("%lf", &c); // 小数型の変数cに値を入力する

    printf("%d, %c, %f\n", a, d, c);

    return 0;
}
