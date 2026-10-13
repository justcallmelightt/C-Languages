#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 제어문 - 조건문 / 반복문

/* 반복문 - 3가지의 제어구조
 - 순차구조
 - 선택구조
 - 반복구조 */

int main() {
    int x;

    printf("숫자 입력: ");
    scanf("%d", &x); // decemal integer 입력

    if (x > 0) {
        printf("양수입니다.\n");
    } else if (x < 0) {
        printf("음수입니다.\n");
    } else { // 예외
        printf("0입니다.\n");
    }

    return 0;
}
