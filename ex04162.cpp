#include <stdio.h>
void main()
{
	// 실습문제 6.7
	printf("실습문제 %.1f\n", 6.7);

	int a = 5, b = 10;
	printf("%d\n", a>b);
	printf("%d\n", a<b);
	printf("%d\n", a==b);
	printf("%d\n\n", a!=b);

	// 실습문제 6.8
	printf("실습문제 %.1f\n", 6.8);

	int c, d, f;
	printf("서로 다른 두 개의 정수를 입력하고 Enter> ");
	scanf_s("%d %d", &c, &d);

	f = (c > d) ? c : d;
	printf("%d\n\n", f);

	// 실습문제 6.9
	printf("실습문제 %.1f\n", 6.9);

	printf("%d\n", (a<b)&&(a==b));
	printf("%d\n", (a<b)||(a!=b));

	// 실습문제 6.10
	printf("실습문제 %.2f\n", 6.10);

	unsigned char a1 = 4, b1 = 8;
	printf("a1<<2 = %d\n", a1<<2);
	printf("b1>>2 = %d\n\n", b1>>2);

	// 실습문제 6.11
	printf("실습문제 %.2f\n", 6.11);

	unsigned n;
	printf("1이상의 정수를 입력하고 Enter> ");
	scanf_s("%d", &n);

	printf("%d\n\n", 2<<n);

	// 실습문제 6.12
	printf("실습문제 %.2f\n", 6.12);

	double x = 3.5;
	int i = 3;
	x = i + x;
	printf("%d\n", (int)x);
	printf("%f\n", x);
	printf("%f\n", (double)i);
}