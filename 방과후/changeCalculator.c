#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 2022에서 scanf() 함수 오류 문제 - scanf() 함수 사용 시 보안 경고를 무시하기 위한 매크로 정의

int main(void) {
    int money, change;
    int price, c50000, c10000, c5000, c1000, c500, c100;

    while (1) {
        printf("물건 값을 입력하시오: ");
        scanf("%d", &price);

        printf("투입한 금액을 입력하시오: ");
        scanf("%d", &money);
        change = money - price;

        if (change < 0) {
            printf("잔액이 부족합니다.");
            printf("%d원 부족\n\n", change);
            printf("처음으로 돌아갑니다.\n");
            continue;
        }
        else {
            printf("\n거스름돈은 다음과 같습니다.\n");

            c50000 = change / 50000;
            change = change % 50000;

            c10000 = change / 10000;
            change = change % 10000;

            c5000 = change / 5000;
            change = change % 5000;

            c1000 = change / 1000;
            change = change % 1000;

            c500 = change / 500;
            change = change % 500;

            c100 = change / 100;
            change = change % 100;

            printf("\n오만원 지폐: %d장\n", c50000);
            printf("만원 지폐: %d장\n", c10000);
            printf("오천원원 지폐: %d장\n", c5000);
            printf("천원 지폐: %d장\n", c1000);
            printf("오백원 동전: %d개\n", c500);
            printf("백원 동전: %d개\n", c100);
            
            break;
            }
    }
    return 0;
}