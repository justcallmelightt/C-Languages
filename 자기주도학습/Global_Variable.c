#include <stdio.h>

/* 
    전역 변수 (global variable)
    지역 변수 (local variable)도 있음. (예제: Local_Variable.c)
*/

int A, B; // 전역 변수 초기값은 0.
int add() {
    return A + B;
}

int main() {
    int answer;

    A = 5;
    B = 7;

    answer = add();
    printf("%d + %d = %d\n", A, B, answer);

    return 0;
}