#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 2022에서 scanf() 함수 오류 문제 - scanf() 함수 사용 시 보안 경고를 무시하기 위한 매크로 정의

int main() {
    double x, y, result;

    printf("두개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    result = x + y; // 덧셈 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f", x, y, result);

    result = x - y;
    printf("\n%f - %f = %f", x, y, result);

    result = x * y;
    printf("\n%f * %f = %f", x, y, result);

    result = x / y;
    printf("\n%f / %f = %f", x, y, result);

    return 0;
}