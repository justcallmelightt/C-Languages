#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss();

int main() {
    int toss, heads = 0, tails = 0; // 3개 각각 int 데이터형에다가 하나씩 변수를 선언하는 방식에서 한줄로 수정함
    srand((unsigned)time(NULL));

    for (toss = 0; toss < 100; toss++) { // 100번 시도
        if (coin_toss() == 1)
            heads++; // 100번 중 앞면일때 heads에 있는 수 증가 (증감연산자 ++)
        else
            tails++; // 100번 중 앞면일때 tails에 있는 수 증가 (증감연산자 ++)
    }
    printf("동전의 앞면: %d \n", heads);
    printf("동전의 뒷면: %d \n", tails);
    return 0;
}

int coin_toss() {
    int i = rand() % 2;

    if (i == 0)
        return 0;
    else 
        return 1;
}