#include <stdio.h>

int main() {
    int i = 3;

    while (i) {
        printf("%d은 참입니다.\n", i);
        i--;
    }
    printf("%d는 거짓입니다.", i);
}
