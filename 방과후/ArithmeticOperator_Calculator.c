#include <stdio.h>

int main() {
    int x, y, result, op;

    printf("2개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    printf("\n도움말: 연산자를 선택하십시오. 예시: *(3)일때 3을 눌러 곱하기 연산자를 택하세요\n"); // UX 개선 (문제 외)
    printf("+(1), -(2), *(3), /(4), %%(5): ");
    scanf("%d", &op);

    printf("\n연산 결과: ");
    if (op == 1) {
        result = x + y;
        printf("%d + %d = %d\n", x, y, result);
    } else if (op == 2) {
        result = x - y;
        printf("%d - %d = %d\n", x, y, result);
    } else if (op == 3) {
        result = x * y;
        printf("%d * %d = %d\n", x, y, result);
    } else if (op == 4) {
        if (y == 0) {
            printf("0으로 나눌 수 없습니다.\n");
        } else {
            result = x / y;
            printf("%d / %d = %d\n", x, y, result);
        }
    } else if (op == 5) {
        if (y == 0) {
            printf("0으로 나눌 수 없습니다.\n");
        } else {
            result = x % y;
            printf("%d %% %d = %d\n", x, y, result);
        }
    } else {
        printf("잘못된 연산자 선택입니다.\n");
    }

    return 0;
}
