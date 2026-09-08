#include <stdio.h>

int main(void) {
    int x;

    // 변수, 변하는 수 ( ≠ 상수, 변하지 않는 수)
    printf("변수 x의 크기: %lu byte\n", sizeof(x));

    // 정수형 Data Type
    printf("short형 변수의 크기: %lu byte\n", sizeof(short));
    printf("int형 변수의 크기: %lu byte\n", sizeof(int));
    printf("long형 변수의 크기: %lu byte\n", sizeof(long));

    // 부동소수점형 Data Type
    printf("float형 변수의 크기: %lu byte\n", sizeof(float));
    printf("double형 변수의 크기: %lu byte\n", sizeof(double));

    // 문자형 Data Type
    printf("char형 변수의 크기: %lu byte\n", sizeof(char));

    return 0;
}
