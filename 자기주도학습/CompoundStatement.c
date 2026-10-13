/* 중괄호를 사용하여 문장들을

조건문의 간략한 표기 예:
if(x != 0) -> if(x)
    printf("양수입니다.\n")
오류 주의 #1 : if(x > 0); 다음과 같이 if 문장의 조건식 뒤에 세미콜론을 찍으면 안 된다. if 문장은 조건식과 문장이 합쳐서 하나의 문장을 이룬다. 위와 같이 작성하면 if 문은 if(x>0);로 끝나고 printf 문장은 조건에 관계없이 실행된다.
오류 주의 #2 : if(x = 0) 아주 많이 하는 오류가 두 값을 비교할때 ==
*/

// 문제 - 학점 결정 코드 A,B,C,D,F를 구분 하면 성취.

#include <stdio.h>

int main() {
    char grade;
    int score;

    printf("==== 학점 결정 프로그램 ==== \n");

    printf("\n원점수를 입력하세요: ");
    scanf("%d", &score);

    // 문제 허점 해결 및 사용자 기준 설계 : 유효하지 않은 점수 걸러내기 (100점을 초과하거나 0점 미만인 경우)
    if (score > 100 || score < 0) {
        printf("==== ! 오류 ! ====\n");
        printf("\n원점수는 0부터 100 사이의 숫자여야만 합니다.\n");
        return 0; // 프로그램 강제 종료
    }

    if(score > 100)
        grade = 'A'; // 여러 줄을 쓸땐 {} 중괄호를 사용할수 있다. 반대로 한줄만 쓸때는 {} 중괄호를 쓰지 않아도 된다
    if(score >= 80 && score < 89)
        grade = 'B';
    if(score >= 70 && score < 79)
        grade = 'C';
    if(score >= 60 && score < 69)
        grade = 'D';
    if(score < 60)
        grade = 'F';


    printf("==== 학점 결과 보고서 ====\n");

    printf("\n학점 결정 결과는 %c입니다. 기준은 입력하신 원점수 %d입니다.", grade, score);
}
