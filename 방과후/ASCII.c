#include <stdio.h>

// ASCII: American Standard Code for Information Interchange

int main(void) {
    char code1 = 'A'; // 문자 A의 ASCII 코드값은 65
    char code2 = 65; // 65는 문자 A의 ASCII 코드값

    printf("code1 = %c\n", code1);
    printf("code2 = %c\n", code2); // %d로 서식자 지정을 하면 
    printf("code2 = %c\n", code1 + code1);
    printf("code2 = %d\n", code1); 

    return 0;
}