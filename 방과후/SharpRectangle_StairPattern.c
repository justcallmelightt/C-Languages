#include <stdio.h>

/*
    *
    **
    ***
    ****
    *****

    다음과 같이 출력되도록 하여 보자.
    실행 결과를 자세히 분석하여 보면 y번째 줄에서 y개의 *를 출력하는 것을 알 수 있다.
*/

int main() {
    int x, y;

    for (y = 1; y <= 5; y++) {
        for (x = 0; x < y; x++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}