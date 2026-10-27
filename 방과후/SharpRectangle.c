#include <stdio.h>

// * 기호를 사각형 모양으로 출력

int main() {
    int x, y;

    for (y = 0; y < 5; y++) {
        for (x = 0; x < 10; x++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}