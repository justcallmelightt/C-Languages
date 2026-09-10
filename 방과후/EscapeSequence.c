#include <stdio.h>

int main() {
    int id, pw;
    
    printf("아이디를 4개의 숫자로 입력하세요: ");
    printf("id: ____ \b\b\b\b\b\a"); // 실습 코드 보완 - 커서 위치가 맞지 않은 문제 수정
    scanf("%d", &id);

    printf("비밀번호를 4개의 숫자로 입력하세요: ");
    printf("pw: ____ \b\b\b\b\b\a");
    scanf("%d", &pw);

    printf("입력한 아이디는 %d이고, 비밀번호는 %d입니다.\n", id, pw); // 실습 전용 코드
    
    return 0;
}