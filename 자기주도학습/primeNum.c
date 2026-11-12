#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*  학습 메모
    소수 (prime)

    양의 정수 n이 소수 조건: 1과 자기 자신만을 약수로 가짐.
    암호학에서 많이 사용 
    숫자 1 제외
*/

int get_integer(void) {
    int n;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    return n;
}

int is_prime(int n) {
    int i;

    for (i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    int n, result;
    n = get_integer();

    if (is_prime(n) == 1)
        printf("%d은 소수입니다.\n", n);
    else
        printf("%d은 소수가 아닙니다.\n", n);

    return 0;
}