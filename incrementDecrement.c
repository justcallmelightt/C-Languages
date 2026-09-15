#include <stdio.h>

int main(void) {
    int x = 2;

    printf("초기 x값: %d\n\n", x);

    // 1. 후위 증가 연산자 (1 + x++)
    // x의 현재 값(2)으로 연산(1 + 2 = 3)을 진행한 후, x가 1 증가하여 3이 됨
    int result1 = 1 + x++;
    printf(" 1 + x++ 결과: %d (연산 후 x값: %d)\n", result1, x);

    // 2. 전위 증가 연산자 (1 + ++x)
    // x의 값(3)을 먼저 1 증가시켜 4로 만든 후, 연산(1 + 4 = 5)을 진행함
    // ※ 주의: '1+++x'로 쓰면 (1++) + x 로 인식되어 컴파일 에러가 발생하므로 '1 + ++x'로 띄어써야 함
    int result2 = 1 + ++x;
    printf(" 1 + ++x 결과: %d (연산 후 x값: %d)\n", result2, x);

    return 0;
}
