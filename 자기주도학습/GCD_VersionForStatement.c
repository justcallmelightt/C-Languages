#include <stdio.h>

int gcd(int x, int y);

int main() {
    printf("최대공약수: %d\n", gcd(30, 20));
}

int gcd(int x, int y) {
    int result = 1;
    int min = (x < y) ? x : y;

    for (int i = 1; i <= min; i++) {
        if (x % i == 0 && y % i == 0)
            result = i;
    }

    return result;
}

// 자기주도학습: 100%