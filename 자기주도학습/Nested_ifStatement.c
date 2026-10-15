#include <stdio.h>

// 문제: 키보드에서 문자를 받아서 문자들을 대문자(A-Z), 소문자(a-z), 숫자(0-9), 그 외의 문자들로 구분하여 보자.

int main() {
    char ch;
    printf("문자를 입력하시오: ");

    ch = getchar();
    if(ch >= 'A' && ch <= 'Z')
        printf("%c는 대문자입니다.\n", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c는 소문자입니다.\n", ch);
    else if(ch >= '0' && ch <= '9')
        printf("%c는 숫자입니다.\n", ch);
    else
        printf("영문 대소문자, 숫자 외 문자 입니다.");

    return 0;
}
