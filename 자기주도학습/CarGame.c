#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void disp_car(int car_number, int distance) {
    int i;

    printf("\nCar #%d:", car_number);

    for (i = 0; i < distance; i++) { // i < distance/10 식으로 10을 나누기 보다 대상값을 10으로 나눠 코드에서 직접 수정하면 컴퓨터 자원을 아낄수있다.
        printf("*");
    }
    printf("\n");
}

int main() {
    int i;
    int car1_dist = 0, car2_dist = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < 6; i++) {
        car1_dist += rand() % 10;
        car2_dist += rand() % 10;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        printf("--------------------------------------------");
        getchar();
    }
    return 0;
}