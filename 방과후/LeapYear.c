#define _CRT_SECURE_NO_WARNINGS // Visual Studio 환경에서 scanf() 함수 사용시 경고 방지
#include <stdio.h>

// 윤년: 4로 나누어 떨어지는 해를 윤년으로한다. 연도가 100으로 나누어 떨어지는 해는 평년이지만 100으로 나누어 떨어지더라도 400으로 나누어 떨어지는 해는 다시 윤년.

int main() {
    int year, result;
    
    printf("년도를 입력하세요: ");
    scanf("%d", &year);

    result = (year % 4 == 0 && year % 100 != 0 || year % 400 ==0); // || 논리 연산자
 // result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 ==0); 로 하여 소스코드 가독성을 향상 시킴과 동시에 가독성을 높히기 위한 해당 괄호를 넣어도 컴파일이 무시되기 때문에 코드에 영향을 미치지 않는다.
    printf("result = %d\n", result);

    return 0;
}