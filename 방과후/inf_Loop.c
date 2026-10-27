#define _CRT_SECURE_NO_WARNINGS
#define SEED_MONEY 1000000
#include <stdio.h>

/*
    100만원으로 1년에 30%의 수익을 얻는다면 몇 년 만에 원금의 10배가 되는가?
    무한 반복 구조를 사용하고 조건이 만족되었을 때 break문을 실행
*/

int main() {
    int year = 0, money = SEED_MONEY;

    while (1) {
        money += money * 0.3; // 30% 수익
        year++;

        if (money >= 10 * SEED_MONEY) {
            break;
        }
    }

    printf("%d년\n", year);

    return 0;
}