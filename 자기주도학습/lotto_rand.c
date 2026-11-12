#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45

/*  학습 메모

    함수 원형(function prototyping): 컴파일러에게 함수에 대하여 미리 알리는 것
    함수 헤더에 세미콜론만 추가
    매개 변수의 이름은 적지 않아도됨

    라이브러리 함수(library function): 컴파일러에서 제공하는 함수
    
    난수 함수(random number): 규칙성이 없이 임의로 생성되는 수
    난수는 암호학이나 시뮬레이션, 게임 등에서 필수적
    rand()

    - 랜덤 함수는 모두 같게 나오며, 이를 해결할려면 매번 난수를 다르게 생성하기 위해 시드(seed)를 다르게 하여야 함
*/

int main(void) {
    int i;

    srand((unsigned)time(NULL)); // time() 함수는 1970년 1월 1일부터 지금까지 흐른 초(second) 수를 돌려줌. (단위가 초라서 1s(1초) 안에 프로그램을 두 번 실행하면 같은 난수가 나옴.)
    for(i = 0; i < 6; i++) 
        printf("%d", rand() % MAX + 1); // 1에서 45로 제한 -> 그래도 랜덤 함수는 같게 나오는 현상 해결 안됨 -> seed 추가로 해결 (위 메모 참고)

    return 0;
}