#include <stdio.h>

void print_stars(void);

int main() {
    print_stars();
    printf("Hello World!\n");
    print_stars();

    return 0;
}

void print_stars(void) {
    for (int i = 0; i < 30; i++) {
        printf("*");
    }
    printf("\n");
}