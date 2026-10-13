#include <stdio.h>

// 학습 목표 및 문제명: 02) if문을 사용하여 절대값을 구하는 프로그램

int main() {
    int number;

    printf("정수를 입력하시오: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    printf("절대값은 %d 입니다.", &number);

    return 0;
}
