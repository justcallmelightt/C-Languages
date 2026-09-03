#define _CRT_SECURE_NO_WARNINGS // Visual Studio 2022에서 scanf() 함수 오류 문제 - scanf() 함수 사용 시 보안 경고를 무시하기 위한 매크로 정의
#include <stdio.h>

int main(void) {
    int x, y;

    printf("정수를 입력하세요 : ");
    scanf("%d", &x); // scanf_s() 함수는 입력 버퍼에서 정수를 읽어와 변수 x에 저장. 보안 관련 오류를 무시하기 위해 사용하며 #define _CRT_SECURE_NO_WARNINGS 매크로를 정의하거나 scanf_s() 함수 중 한가지만 사용해도 된다.

    return 0;
}
