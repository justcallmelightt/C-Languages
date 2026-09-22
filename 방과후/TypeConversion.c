#define _CRT_SECURE_NO_WARNINGS // Visual Studio 환경에서 scanf() 함수 사용시 경고 방지
#include <stdio.h>

int main() {
    int i;
    double f;

    f = 5 / 4;
    printf("double 5 / 4 = %f\n", f); // printf("%f\n", f); 에서 수정됨

    f = (double)5 / 4;
    printf("double (double)5 / 4 = %f\n", f);

    f = 5.0 / 4;
    printf("double 5.0 / 4 = %f\n", f);

    f = (double)5 / (double)4;
    printf("double (double)5 / (double)4 =  %f\n", f);

    i = 1.3 + 1.8;
    printf("int 1.3 + 1.8 = %d\n", i);

    i = (int)1.3 + (int)1.8;
    printf("int (int)1.3 + (int)1.8 = %d\n", i);

    return 0;
}