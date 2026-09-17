#include <stdio.h>

int main() {
    int x = 10, y = 10, z = 33;

    x += 1;
    y *= 2;
    z %= 10 + 20;

    printf("x = %d y = %d z = %d\n", x, y, z);

    return 0;
}

/* 오류 주의

++x = 10;, x + 1 = 20; 등호의 왼쪽은 항상 변수이어야한다. */