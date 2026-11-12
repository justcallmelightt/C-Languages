#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printOptions() {
    printf("==============================\n");
    printf("'c' 섭씨온도에서 화씨온도로 변환\n");
    printf("'f' 화씨온도에서 섭씨온도로 변환\n");
    printf("'q' 종료\n");
    printf("==============================\n");
}

double C2F(double c_temp) {
    return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp) {
    return (f_temp - 32.0) * 5.0 / 9.0;
}

long factorial(int n) {
    int i;
    long result = 1;

    for (i = 1; i <= n; i++) {
        result *= i; // result = result * i
    }
    return result;
}

long combination(int n, int r) {
    return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int get_integer(void) {
    int n;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    return n;
}

int main() {
    int a, b;
    char choice;
    double temp;

    a = get_integer();
    b = get_integer();

    printf("C(%d, %d) = %ld \n", a, b, combination(a, b));

    getchar(); // 정수 입력 후 남은 엔터키 문자 삭제

    while (1) {
        printOptions();
        printf("\n>> 메뉴에서 선택하세요."); // 맨 앞 \n 추가

        choice = getchar();

        if (choice == 'q')
            break;
        else if (choice == 'c') {
            printf(">> 섭씨온도: ");
            scanf("%lf", &temp);
            printf(">> 화씨온도: %lf \n", C2F(temp));
        }
        else if (choice == 'f') {
            printf(">> 화씨온도: ");
            scanf("%lf", &temp);
            printf(">> 섭씨온도: %lf \n", F2C(temp));
        }
        getchar(); // 엔터키 문자 삭제
    }

    return 0;
}