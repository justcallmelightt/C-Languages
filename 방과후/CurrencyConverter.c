#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double rate;
    double dollar;
    int won;

    printf("환율을 입력하시오: ");
    scanf("%lf", &rate); // double 타입은 %lf 사용

    printf("원화 금액을 입력하시오: ");
    scanf("%d", &won);

    dollar = won / rate; // 환율(rate)로 나누어 dollar 계산 저장

    printf("원화 %d원은 %.1f달러입니다.\n", won, dollar); // 계산된 dollar 출력

    return 0;
}
