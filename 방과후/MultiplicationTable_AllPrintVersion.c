// 학습 목표: 이 코드를 실행하면 구구단을 모두 출력하는 버전으로 변경하자.

#include <stdio.h>

int main() {
    int x;
    int y;

    for (x = 1; x <= 9; x++) {
        for (y = 2; y <= 9; y++) {
            printf("%d * %d = %2d  ", y, x, y * x);
        }
        printf("\n");
    }

    return 0;
}