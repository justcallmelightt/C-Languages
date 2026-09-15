#include <stdio.h>
#define SEC_PER_MINUTE 60 // 1분은 60초, 기호상수선언

int main() {
    int seconds;

    printf("초를 입력하시오: ");
    scanf("%d", &seconds);

    printf("%d초는 %d분 %d초입니다.", seconds, seconds / SEC_PER_MINUTE, seconds % SEC_PER_MINUTE);

    return 0;
}