#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 2022에서 scanf() 함수 오류 문제 - scanf() 함수 사용 시 보안 경고를 무시하기 위한 매크로 정의

int main() {
    int x, y;

    printf("첫번째 정수를 입력하시오: ");
    scanf("%d", &x);

    printf("두번째 정수를 입력하시오: ");
    scanf("%d", &y);

    
    printf("\nx == y의 결과값: %d\n", x == y); // 출력 문 시작 전 맨 처음 \n은 두번째 정수 입력 후 줄 바꿈을 위해 쓴다 ("입력하시오:" 후에 줄을 바꾸면 입력이 부자연스러움.)
    printf("x != y의 결과값: %d\n", x != y);
    printf("x > y의 결과값: %d\n", x > y);
    printf("x < y의 결과값: %d\n", x < y);
    printf("x >= y의 결과값: %d\n", x >= y);
    printf("x <= y의 결과값: %d\n", x <= y);

    return 0;
}