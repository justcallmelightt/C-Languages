#include <stdio.h>

int main(void) {
    float radius;
    printf("반지름을 입력하시오: ");
    scanf("%f", &radius); // 정의가 되고나서 계산식이 들어가야 함 (혼선 주의)
    float area = 3.14 * radius * radius;
    printf("원의 면적: %f", area);

    return 0;
}
