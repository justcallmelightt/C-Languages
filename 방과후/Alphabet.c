#include <stdio.h>

// 알파벳 소문자를 입력 받아 대문자로 바꾸는 프로그램

int main() {
    char letter;

    while (1) {
        printf("소문자를 입력하세요 (종료: Q): ");
        scanf("%c", &letter);

        if (letter == 'Q')
            break;

        if (letter < 'a' || letter > 'z')
            continue;

        letter -= 32;
        printf("변환된 대문자는 %c입니다.\n", letter);
    }
    return 0;
}