#define _CRT_SECURE_NO_WARNINGS // Windows에서 Visual Studio 환경 고려
#include <stdio.h>

/*
    do... while 문 이용
    사용자가 0을 입력할 때까지 입력된 숫자들을 더하는 프로그램
*/

int main() {
    int n, sum = 0;

    printf("==== 0을 입력하여 종료 ====\n\n");

    do { // do는 조건을 확인하기 전에 먼저 실행되는 문장들을 포함한다.
        printf("정수를 입력하세요: "); //
        scanf("%d", &n);

        sum += n;
    } while (n != 0); // while은 조건이 만족되는 동안 문장들을 반복 실행한다.
        printf("숫자들의 합: %d\n", sum);

    return 0;
}
