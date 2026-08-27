#include <stdio.h> // standard input output header (file)

/* int main() { // 프로그램의 진입점(Entry Point) 및 인사말 출력 (main 함수로 printf 사용하기 연습)
	printf("Hello, World!");
	return 0;
} 
*/

int main() {
	int a = 150;
	int b = 150;
	int sum = a + b;
	printf("\n두 수의 합은 %f입니다.\n", sum); // %d = 형식 지정자: decimal integer, %f = 형식 지정자: float, %s = 형식 지정자: string
	printf("a + b %f\n\n", a + b);
	printf("%f + %f = %f\n", a, b, sum);
	return 0; 
}
