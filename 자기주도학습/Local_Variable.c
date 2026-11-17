#include <stdio.h>

// 지역 변수 (local variable)

int main() {
    int i;

    for(i = 0; i < 5; i++) {
        int temp = 1;
        printf("temp = %d\n", temp);
        temp++;
    }
    return 0;
}