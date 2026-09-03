#include <stdio.h>

int main(void) {
    float num1, num2, num3;
    printf("3개의 실수를 입력하시오: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("합계: %.2f\n", num1 + num2 + num3);
    printf("평균: %.2f", (num1 + num2 + num3) / 3.0);
    return 0;
}
