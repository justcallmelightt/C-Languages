#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void) {
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    
    return n;
}

int add(int x, int y) {
    return x + y;
}

int main() {
    int x = get_integer();
    int y = get_integer();
    int sum = add(x, y);

    printf("두 정수의 합은 %d입니다.\n", sum);

    return 0;
}