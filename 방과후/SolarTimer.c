#include <stdio.h>

int main() {
    double time, distance = 149600000, light_speed = 300000; // 빛의 속도 (단위: km/s);

    printf("빛이 지구에서 태양까지 도달하는 시간: %.6f 초\n", distance / light_speed);

    return 0;
}