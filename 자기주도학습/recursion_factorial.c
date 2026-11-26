#include <stdio.h>

// 제귀적인 팩토리얼 함수 계산

long factorial(int n) {
    printf("factorial(%d)\n", n);

    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    printf("%d!는 %d입니다. \n", n, factorial(n)); // long 타입과 decimal integer임에도 불구 아무 문제 없이 실행되는것 catch해줘야 함

    return 0;
}