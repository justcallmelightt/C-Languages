#include <stdio.h>

int gcd(int x, int y);

int main() {
    printf("최대공약수: %d\n", gcd(30, 20));
}

int gcd(int x, int y) {
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

// for문으로 구현 가능하나 학습을 위해 for문 외 현행 진도 수준 코드 예제로 작성