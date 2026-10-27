#include <stdio.h>

// 0부터 10까지의 정수 중에서 3의 배수만 제외하고 출력하는 예제

int main() {
    int i;

    for(i = 0; i < 10; i++) {
        if (i % 3 == 0)
            continue;
        printf("%d", i);
    }
    return 0;
}