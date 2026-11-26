#include <stdio.h>

// 하노이 탑 (Tower of Hanoi): 보조 기둥을 이용해 n개의 원판을 한 기둥에서 다른 기둥으로 옮긴다 (재귀)

void hanoi_tower(int n, char from, char tmp, char to) {
    if (n == 1) {
        printf("원판 1을 %c에서 %c로 욺긴다.\n", from, to);
    }
    else {
        hanoi_tower(n - 1, from, to, tmp);
        printf("원판 %d를 %c에서 %c로 욺긴다.\n", n, from, to);
        hanoi_tower(n - 1, tmp, from, to);
    }
}

int main() {
    int n;

    while (1) {
        printf("원판의 수를 쓰세요: ");
        scanf("%d", &n);
        hanoi_tower(n, 'A', 'B', 'C');
    }
}