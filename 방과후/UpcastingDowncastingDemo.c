#include <stdio.h>

int main() {
    char c;
    int i;
    float f;

    c = 10000; // 내림 변환
    i = 1.23456 + 10; // 내림 변환
    f = 10 + 20; // 올림 변환

    // printf("c = %d, i = %d, f = %f\n", c, i, f);
    printf("char = %d", c); // 16이 뜨는 이유? 0010 0111 0001 0000 = 10000 -> char = 0001 0000 (앞에 있던 0010 0111 부분을 자름.) = 16 (그러므로 해당 2진수는 16이므로 16.)
    printf("\nint = %d", i);
    printf("\nfloat = %f", f);

    return 0;
}

// 정수 연산시 char형이나 short형의 경우, CPU의 기본 연산 단위인 int형으로 승격(Promotion)되어 계산된 후 결과가 반환된다.
// 서로 다른 자료형이 혼합하여 사용되는 경우, 더 큰 자료형으로 통일.