// 달의 일수를 계산하는 프로그램
#include <stdio.h>

int main() {
    int month, days;

    printf("달을 입력하시오: ");
    scanf("%d", &month);

    switch(month) {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
    }

    printf("%d월의 일수는 %d입니다.", month, days);

    if (month < 1 || month > 12) {
        printf("잘못된 입력입니다.");
    }

    return 0;
}