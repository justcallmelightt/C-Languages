// 학습 목표: 이 코드를 실행하면 구구단을 가로로 출력하는 버전으로 변경하자.

#include <stdio.h>

int main() {
    int x;
    int y = 1;

    printf("출력하고 싶은 답: ");
    scanf("%d", &x);

    for (y = 1; y <= 9; y++) {
        printf("%d * %d = %d  ", x, y, x * y);
    }

    return 0;
}
