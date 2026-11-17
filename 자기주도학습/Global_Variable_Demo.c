#include <stdio.h>

// 전역 변수 응용 - 예제 써보기

int x; // 전역 변수로 선언 (전역 변수이기 때문에 sub()에서도 main()에서도 사용 가능)

void sub() {
    for (x = 0; x < 10; x++) {
        sub();
    }
}

int main() {
    for (x = 0; x < 10; x++) {
        printf("*");
    }
}