#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> // Sleep関数用

#define WIDTH 40  // 星空の横幅
#define HEIGHT 10 // 星空の高さ

// 画面をクリアする関数
void clear_screen() {
    printf("\033[2J");
    printf("\033[H");
}

// 星空を描画する関数
void draw_stars(int stars[HEIGHT][WIDTH]) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (stars[y][x]) {
                printf("*"); // 星を表示
            } else {
                printf(" "); // 空白を表示
            }
        }
        printf("\n");
    }
}

int main() {
    int stars[HEIGHT][WIDTH] = {0}; // 星空の状態を保持する配列
    srand((unsigned int)time(NULL)); // 乱数の種を初期化

    while (1) {
        clear_screen(); // 画面をクリア

        // 星の状態をランダムに更新
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                stars[y][x] = rand() % 2; // 0または1をランダムに設定
            }
        }

        draw_stars(stars); // 星空を描画
        fflush(stdout);    // 画面を即座に更新
        Sleep(200);        // 0.2秒待つ（アニメーション速度調整）
    }

    return 0;
}
