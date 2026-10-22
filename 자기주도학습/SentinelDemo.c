#define _CRT_SECURE_NO_WARNINGS // Windows Visual Studio 환경 고려
#include <stdio.h>

/*
    while 문을 이용한 성적의 평균 구하기 프로그램

    센티널(sentinel): 입력되는 데이터의 끝을 알리는 특수한 값

    사용자로부터 임의의 개수의 성적을 받아서 평균을 계산한 후에 출력하는 프로그램을 작성하여 보자.
    -1을 보초값으로 사용한다.
*/

int main() {
    int grade, n;
    float average, sum;

    // 초기값 설정
    n = 0;     // n을 0으로 초기화한다.
    sum = 0;   // sum을 0으로 초기화한다.
    grade = 0; // grade을 0으로 초기화한다.

    printf("=== 종료하려면 음수를 입력하시오. ===\n");

    while (grade >= 0) {
        printf("성적을 입력하세요: ");
        scanf("%d", &grade);

        sum += grade; // 생각해보기: printf, scanf 문과 해당 2줄 (n++) 로직의 순서를 바꾸면 마지막 데이터 제거 로직이 필요하지 않다.
        n++;
    }

    sum = sum - grade; // 마지막 데이터 제거
    n--;

    average = sum / n;
    printf("성적의 평균은 %f입니다.\n", average);

    return 0;
}
