#define _CRT_SECURE_NO_WARNINGS // Visual Studio 환경에서 scanf() 함수 사용시 경고 방지
#include <stdio.h>

/*
섭씨온도 = (5/9) * (화씨온도 - 32)
섭씨온도 C, 화씨온도 F
*/

int main(void) {
    double f_temp;
    double c_temp;

    printf("화씨온도를 입력하시오: ");
    scanf("%lf", &f_temp);

    // 5.0 / 9.0을 통해 실수 연산이 되도록 처리
    c_temp = (5.0 / 9.0) * (f_temp - 32.0);
    
    // 소수점 2자리까지만 깔끔하게 출력하고 싶다면 %.2lf 사용 가능
    printf("섭씨온도는 %lf입니다.\n", c_temp);

    return 0;
}
