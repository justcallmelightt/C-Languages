#include <stdio.h>

// do...while 문을 이용한 메뉴

int main() {
    int n = 0;

    do {
        printf("1 - 새로 만들기\n");
        printf("2 - 파일 열기\n");
        printf("3 - 파일 닫기\n\n");

        printf("하나를 선택하세요: ");
        scanf("%d", &n);

    } while (n < 1 || n > 3); {
        printf("선택된 메뉴: %d\n", n);
    }
}
