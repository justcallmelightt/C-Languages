#include <stdio.h>

/*
    반복(iteration): 같은 처리 과정을 여러 번 되풀이하는 것
    프로그램에서는 반복적인 작업들이 반드시 필요

    while: 조건이 만족되는 동안 문장들을 반복 실행
    for: 반복 횟수가 정해져 있는 경우에 사용
*/

int main() {
    int pw = 0;

    while (pw != 1208) {
        printf("비밀번호를 입력하시오: ");
        scanf("%d", &pw);
    }
    printf("비밀번호가 일치합니다.\n");

    return 0;
}