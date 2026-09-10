#include <stdio.h>

int main() {
    printf("\a");    // ASCII 7은 탈출 문자 '\a' (Alert)로 쓰는 것이 C 표준 관례입니다.
    fflush(stdout); // 버퍼를 즉시 비워 터미널로 경고음을 전달합니다.

    return 0;
}

// gcc beepDemoMac.c -o main && ./main로 실행