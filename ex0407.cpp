#include <stdio.h>
void main0()
{
	// 4.1 실습문제 88pg
	printf("%.1f\n", 4.1);
	
	int a = 5, b = 7; // 변수선언, 값할당
	int c;

	// 수식1
	c = a * b - 5; 
	printf("수식1: %d\n", c);

	// 수식2
	c = a / 2 + b; 
	printf("수식2: %d\n", c);

	// 수식3
	c = 2 * a + 4 * b;
	printf("수식3: %d\n\n", c);

	// 4.2 실습문제 88pg
	printf("%.1f\n", 4.2);

	float a1 = 5.3, b1 = 7.6; // 변수선언, 값할당
	float c1;				  // 앞서 int로 변수선언해서 float a1,b1,c1으로 선언함.

	// 수식1
	c1 = a1 / (a1 + b1);
	printf("수식1: %f\n", c1);

	// 수식2
	c1 = (a1 - b1) / (a1 + b1);
	printf("수식2: %f\n", c1);

	// 수식3
	c1 = 2 * a1 * a1 - 4 * a1 * b1;
	printf("수식3: %f\n\n", c1);


	// 4.3 실습문제 90pg
	printf("%.1f\n", 4.3);

	a = 3, b = 5; // 앞에 int 선언을 했기 때문에 값 할당만 했음. (7줄)
	a = a + b;
	b = b + a;
	
	printf("프로그램 1\n");
	printf("%d\n", a);
	printf("%d\n", b);

	a = 3, b = 5;
	a = a - b;
	b = b - a;

	printf("프로그램 2\n");
	printf("%d\n", a);
	printf("%d\n\n", b);

	// 4.4 실습문제 90pg
	printf("%.1f\n", 4.4);

	a = 3, b = 5;
	int d;
	
	c = a + b; // 8
	d = a - b; // -2
	
	c = c - d; // 10
	d = d + c; // 8
	c = d - c; // -2

	printf("%d\n", c);
	printf("%d\n\n", d);

	// 4.5 실습문제 90pg
	printf("%.1f\n", 4.5);

	a = a + b; // 실습문제 4.4에서(63줄) a,b 를 값할당 해줬기 때문에 바로 식 들어감. 8
	b = a - b; // 3
	a = a - b; // 5

	printf("%d\n", a);
	printf("%d\n\n", b);

	// 4.6 실습문제 94pg
	printf("%.1f\n", 4.6);

	a = 3, b = 5; // 값이 바꼈으므로 다시 값 할당
	
	c = a;
	a = b;
	b = c;

	printf("%d\n", a);
	printf("%d\n\n", b);

	// 4.7 실습문제 94pg
	printf("%.1f", 4.7);


}