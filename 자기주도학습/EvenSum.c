#include <stdio.h>

int main() {
    int i, n, sum;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    sum = 0;

    for (i = 0; i <= n; i=i+2)
        sum += i;

    printf("1부터 %d까지의 짝수합은 %d입니다.\n", n, sum);

    return 0;
}