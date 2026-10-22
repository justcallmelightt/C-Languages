// 1부터 n까지의 합을 계산하는 프로그램

#include <stdio.h>

int main() {
    int i, n, sum; // 변수 선언

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    sum = 0;

    for (i = 1; i <= n; i++)
        sum += i;

    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

    return 0;
}