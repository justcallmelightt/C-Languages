#include <stdio.h>

long factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; i++) { // 재귀문을 쓰면 느리다
        result *= i;
    }
    return result;
}

int main(void) {
    int n;
    printf("알고 싶은 팩토리얼의 값: "); // 문제에서 알고 싶은 팩토리얼의 값은? -> 값: 으로 변경 (입력 가독성 고려)
    scanf("%d", &n);
    printf("%d!의 값은 %ld입니다.\n", n, factorial(n));
    
    return 0;
}