#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS // Visual Studio 환경에서 scanf() 함수 사용시 경고 방지

int main() {
    double high;
    double cross;
    double wide;

    printf("가로 길이를 입력하세요: ");
    scanf("%lf", &high);

    printf("세로 길이를 입력하세요: ");
    scanf("%lf", &cross);

    wide = high * cross;

    printf("사각형 넓이는 %.2f입니다.\n", wide);
    printf("사각형 둘레는 %.2f입니다.\n", 2 * (high + cross));

    return 0;
}
