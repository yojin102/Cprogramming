#include <stdio.h>
void main0409()
{
	// 5.4 실습문제 118pg
	printf("%.1f\n", 5.4);

	int a;
	double b;
	char c1;
	printf("나이를 입력하고(정수형) Enter> ");
	scanf_s("%d", &a);
	printf("키를 입력하고(실수형) Enter> ");
	scanf_s("%lf", &b);
	getchar();
	printf("혈액형(A,B,O만) 입력하고 Enter> ");
	scanf_s("%c", &c1);
	printf("입력된 나이 %d, 키 %.1f, 혈액형 %c\n\n", a, b, c1);

	// 5.5 실습문제 119pg
	printf("%.1f\n", 5.5);

	double a1, c, x;

	printf("실수를 3개 입력하고 Enter> ");
	scanf_s("%lf %lf %lf", &a1, &b, &c);
	x = 3 * a1 + 4*b - 6*c;
	printf("수식1: %f\n", x);
	x = 2 * a1 * a + 4 * b * c;
	printf("수식2: %f\n", x);
	x = a1 + b / c;
	printf("수식3: %f\n", x);
}