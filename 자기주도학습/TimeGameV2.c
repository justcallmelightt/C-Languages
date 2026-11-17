#include <stdio.h>
#include <time.h>
#include <unistd.h>   // sleep()

int main() {
    struct timespec start, end;
    double elapsed;
    int target, i;

    printf("목표 시간(초)을 입력하세요: ");
    scanf("%d", &target);
    while (getchar() != '\n');

    printf("3초 뒤에 시작합니다. 준비하세요!\n");
    for (i = 3; i >= 1; i--) {
        printf("%d...\n", i);
        sleep(1);
    }

    printf("==== 시작! %d초가 되면 Enter를 누르세요. ====\n", target);
    clock_gettime(CLOCK_MONOTONIC, &start);

    getchar();

    clock_gettime(CLOCK_MONOTONIC, &end);
    elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1000000000.0;

    printf("종료되었습니다.\n");
    printf("경과된 시간은 %.3f초 입니다.\n", elapsed);
    printf("목표와의 차이: %+.3f초\n", elapsed - target);

    if ((int)elapsed == target)
        printf("성공입니다! (목표 ~ +0.999초까지 인정)\n");
    else
        printf("실패입니다. (목표 ~ +0.999초까지 인정)\n");

    return 0;
}