#include <stdio.h>

/*
문제: 윤년 판단 프로그램을 if 문을 사용하여 다시 작성

연도가 4로 나누어 떨어지면서 100으로 나누어 떨이지지 않는 연도
400으로 나누어 떨어지는 연도
*/

int main() {
    int year;
    printf("연도를 입력하세요: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d년은 윤년입니다.", year);
    }
    else {
        printf("%d년은 윤년이 아닌 평년입니다.", year);
    }

    return 0;
}
