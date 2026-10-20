#include <stdio.h>

int main() {
    int x;
    int y = 1;

    printf("출력하고 싶은 답: ");
    scanf("%d", &x);

    for (y = 1; y <= 9; y++) {
        printf("%d * %d = %d\n", x, y, x * y);
    }

    return 0;
}