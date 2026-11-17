#include <stdio.h>
void inc(int counter);

int main() {
    int i = 10; // int i;와 i = 10;을 한줄로 수정

    printf("함수 호출전 i = %d\n",i);
    inc(i);
    printf("함수 호출후 i = %d\n",i); // 값에 의한 호출 (call by value), 참고로 변수 말고 배열은 call by reference다.

    return 0;
}

void inc(int counter) {
    counter++;
}