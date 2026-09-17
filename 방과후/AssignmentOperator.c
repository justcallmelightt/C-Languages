#include <stdio.h>

int main() {
    int x, y, result;

    x = 1;

    result = x + 1;
    printf("수식 x + 1의 값은 %d\n", result);
    
    /* printf 문에 x+1 식으로 써도 에러가 안남.
    학습을 위해 C언어의 특성을 살려서 result를 계속 재정의. (자습 완료) */
    
    result = y = x + 1;
    printf("수식 y = x + 1의 값은 %d\n", result);
    
    result = y = 10 + (x = 2 + 7);
    printf("수식 y = 10 + (x = 2 + 7)의 값은 %d\n", result);

    result = y = x = 3;
    printf("수식 y = x = 3 의 값은 %d\n", result);

    return 0;
}