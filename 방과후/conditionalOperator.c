#define _CRT_SECURE_NO_WARNINGS // Visual Studio 환경에서 scanf() 함수 사용시 경고 방지
#include <stdio.h>

// 조건 연산자

int main() {
    int x, y;

    /* 
    printf("정수 2개: ");
    scanf("%d %d", &x, &y);
    */

    printf("첫번째 정수 입력: "); // 정수를 하나씩 입력 받아서 사용자가 햇갈리지 않게 개선
    scanf("%d", &x);

    printf("두번째 정수 입력: ");
    scanf("%d", &x);

    printf("큰 수: %d\n", (x > y) ? x : y); // "는" 단위 통일 (수 =%d -> 수: %d)
    printf("작은 수: %d\n", (x < y) ? x : y);
}