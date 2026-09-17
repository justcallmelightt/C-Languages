#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 환경에서 scanf() 사용 시 발생하는 보안 경고를 비활성화

int main() {
    int x, y;

    /* printf("두개의 정수를 입력하세요.")
    scanf("%d %d", &x, &y)*/

    printf("첫번째 정수를 입력하세요: "); // 개선: 실습에서 정수를 한번에 두개를 받아서 "3 4" 같은 식으로 입력 받는 대신 하나씩 받아와 접근성을 향상시킴.
    scanf("%d", &x);

    printf("두번째 정수를 입력하세요: ");
    scanf("%d", &y);

    printf("\n결과입니다.");

    printf("\n%d && %d의 결과값: %d", x, y, x && y);
    printf("\n%d || %d의 결과값: %d", x, y, x || y);
    printf("\n!%d의 결과값: %d", x, !x);

    return 0;
}
