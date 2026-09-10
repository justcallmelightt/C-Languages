#include <stdio.h>

int main(void) {
    int x, y, z, sum;

    printf("정수 3개를 입력하세요 (x, y, z), \n x :");
    scanf("%d", &x);
    printf("y : ");
    scanf("%d", &y);
    printf("z : ");
    scanf("%d", &z);

    sum += x;
    sum += y;
    sum += z;
    
    printf("3개 정수의 합은 %d\n", sum);

    return 0;
}