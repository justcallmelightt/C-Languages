#include <stdio.h>

void sub() {
    static int scount = 0; // 정적 지역 변수로서 static을 붙이면 지역 변수가 정적 변수로 된다.
    int acount = 0;
    printf("scount = %d\t", scount);

    printf("acount = %d\n", acount);
    scount++;
    acount++;
}

int main() {
    sub();
    sub();
    sub();

    return 0;
}