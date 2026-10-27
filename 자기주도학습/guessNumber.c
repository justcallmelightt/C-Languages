#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// do while문을 활용한 숫자 맞추기 게임

int main() {
    srand((unsigned)time(NULL)); // 난수 발생기 시드 설정
    int guess, tries = 0, answer = rand() % 100; // answer에 정답을 난수로 발생시킴. (0~99)

    do {
        printf("\n숫자를 입력하세요: ");
        scanf("%d", &guess);
        tries++;

        if (guess > answer) {
            printf("정답은 %d보다 작습니다.\n", guess); // HIGH
        } else if (guess < answer) {
            printf("정답은 %d보다 큽니다.\n", guess); // LOW
        } else if (guess == answer) {
            printf("정답은 %d와 같습니다.\n", guess); // CORRECT
        }

    } while (guess != answer);
        printf("\n = 축하합니다. 숫자를 맞추셨습니다. = \n");
        printf("시도 횟수: %d | 정답: %d\n", tries, answer);

    return 0;
}
