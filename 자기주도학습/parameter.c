#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b; // 번외: 삼항연산자를 활용 (문제 외)
}

int main() {
    int x, y;

    printf("정수를 입력하시오. : ");
    scanf("%d", &x);
    printf("정수를 입력하시오. : ");
    scanf("%d", &y);

    int larger;
    larger = max(x, y);
    printf("더 큰값은 %d입니다.\n", larger);

    return 0;
}