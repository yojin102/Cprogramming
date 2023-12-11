#include <stdio.h>
void main0416()
{
	int a, b;
	
	// 실습문제 6.1
	printf("실습문제 %.1f\n", 6.1);

	printf("1. %d\n", 7/4);
	printf("2. %d\n", 7%4);
	printf("3. %d\n", 9/2);
	printf("4. %d\n\n", 9%2);

	// 실습문제 6.2
	printf("실습문제 %.1f\n", 6.2);

	printf("정수 a, b값을 입력하고 Enter> ");
	scanf_s("%d %d", &a, &b);

	printf("몫: %d\n", a/b);
	printf("나머지: %d\n\n", a%b);

	// 실습문제 6.3
	printf("실습문제 %.1f\n", 6.3);

	a = 5, b = 10;
	a++; --b;
	a = b % a;
	b = --a + ++b;
	printf("%d  %d\n\n", a,b);

	// 실습문제 6.4
	printf("실습문제 %.1f\n", 6.4);

	a = 5, b = 10;
	--a; ++b;
	b %= a;
	a /= b;
	printf("%d  %d\n\n", a, b);

	// 실습문제 6.5
	printf("실습문제 %.1f\n", 6.5);

	double p, r, x, y;
	printf("반지름 값을 입력하고 Enter> ");
	scanf_s("%lf", &r);

	p = 3.14; // 파이
	x = 2 * p * r; // 원의 둘레
	y = p * r * r; // 원의 면적

	printf("둘레: %.f\n", x);
	printf("면적: %.f\n\n", y);

	// 실습문제 6.6
	printf("실습문제 %.1f\n", 6.6);

	double c, f, C, F;
	printf("섭씨온도, 화씨온도를 입력하고 Enter> ");
	scanf_s("%lf %lf", &c, &f);

	F = c * 1.8 + 32;
	C = (f - 32) / 1.8;

	printf("화씨 -> 섭씨 : %.f\n", C);
	printf("섭씨 -> 화씨 : %.f\n", F);
}