// while 문을 이용한 제곱값 출력 프로그램

#include <stdio.h>

int main() {
    int n = 1;

    printf("=================\n");
    printf("    n  n의 제곱\n");
    printf("=================\n");

    for (n = 1; n <= 10; n++)
        printf("%5d %5d \n", n, n * n); // while 문을 사용하면 적어도 4줄이지만, for 문을 사용하면 총 2줄로 줄일 수 있다.

    return 0;
}