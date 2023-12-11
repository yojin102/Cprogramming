#include <stdio.h>
#include <math.h>
void main007()
{
	// 247pg 실습문제 10.1
	printf("실습문제 %.1f\n", 10.1);

	int i;
	
	do {
		printf("0 입력시 종료\n");
		printf("숫자 입력 후 Enter> ");
		scanf_s("%d", &i);
		printf("%d의 절댓값=%d\n", i, abs(i));

	}
	while (i != 0);

	// 248pg 실습문제 10.2
	printf("\n실습문제 %.1f\n", 10.2);

	double x, y;
	printf("임의의 두 실수 x와 y를 입력하세요> ");
	scanf_s("%lf %lf", &x, &y);

	printf("pow(x,y)=%f\n", pow(x,y));
	printf("pow(y,x)=%f\n", pow(y,x));

	// 248pg 실습문제 10.3
	printf("\n실습문제 %.1f\n", 10.3);
	printf("");

	// 249pg 실습문제 10.4
	printf("\n실습문제 %.1f\n", 10.4);
	
	printf("임의의 두 실수 x와 y를 입력하세요> ");
	scanf_s("%lf %lf", &x, &y);

	printf("식1 : %lf\n", pow(x, 2.0) + pow(y, 2.0));
	printf("식2 : %lf\n", pow((x + y), 2.0));
	printf("식3 : %lf\n", pow(fabs(x + y), 2.0));
	printf("식4 : %lf\n", sqrt(pow(x, 2.0) + pow(y, 2.0)));


}