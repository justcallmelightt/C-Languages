#include <stdio.h>

int main(void) {
    int x = 20;
    int y = 10;

    int sum = x + y;
    int diff = x - y;
    int mul = x * y;
    int div = x / y; 

    printf("두수의 합: %d\n", sum);
    printf("두수의 차: %d\n", diff);
    printf("두수의 곱: %d\n", mul);
    printf("두수의 몫: %d\n", div);

    return 0;
}
