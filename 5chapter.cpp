#include <stdio.h>
void main0408()
{
	// 5.1 실습문제 113pg
	printf("%.1f\n", 5.1);

	int a, b;
	printf("10진 정수를 입력하고 Enter> ");
	scanf_s("%d", &a); // scanf에 언더바 s를 붙여줘야되는데 붙이지 않아 오류발생
	printf("10진 정수를 입력하고 Enter> ");
	scanf_s("%d", &b);
	printf("a+b=%d \n", a+b);
	printf("a-b=%d \n", a-b);
	printf("a*b=%d \n", a*b);
	printf("a/b=%d \n\n", a/b);

	// 5.2 실습문제 115pg
	printf("%.1f\n", 5.2);

	printf("10진 정수를 입력하고 Enter> ");
	scanf_s("%d", &a);
	printf("10진 정수를 입력하고 Enter> ");
	scanf_s("%d", &b);
	printf("변수 a값(8진수) : %o\n", a);
	printf("변수 a값(16진수) : %x\n", a);
	printf("변수 b값(8진수) : %o\n", b);
	printf("변수 b값(16진수) : %x\n", b);
	printf("a+b(16진수) = %x\n", a+b);
	printf("a+b(8진수) = %o\n\n", a+b);

	// 5.3 실습문제 116pg
	printf("%.1f\n", 5.3);

	double x, y;
	printf("실수를 입력하고 Enter> ");
	scanf_s("%lf", &x);
	printf("실수를 입력하고 Enter> ");
	scanf_s("%lf", &y);
	printf("x+y=%.2f\n", x+y);
	printf("x-y=%.2f\n", x-y);
	printf("x*y=%.2f\n", x*y);
	printf("x/y=%.2f\n", x/y);
}