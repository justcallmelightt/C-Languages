#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
문제: 분자와 분모를 입력받아 분수를 출력하는 프로그램

사용자로부터 두 개의 정수를 입력받아서 정수 간의 나눗셈을 실행
나눗셈을 하기 전에 분모가 0인지를 if문을 사용하여 검사
*/

int main() {
    int num, den;
    printf("분자와 분모를 입력하시오: ");
    scanf("%d %d", &num, &den);

    if (den == 0) {
        printf("0으로 나눌 수는 없습니다.\n");
    }
    else {
        printf("결과는 %d입니다.\n", num / den);
        // 또는 result 등의 변수에 따로 계산식을 저장한뒤 그 값을 출력하는 방식으로도 가능.
    }

    return 0;
}
