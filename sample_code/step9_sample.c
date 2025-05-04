#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void show_message() {
    printf("Hello, World!\n");
}

int main() {
    int result = add(5, 10);
    printf("Result: %d\n", result);
    show_message();
    return 0;
}
