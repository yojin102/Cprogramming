#include <stdio.h>

// 함수선언
int func1(int a);
int func2();

int a = 100; // 전역변수

int main07()
{
	// int a = 100; --------- 지역변수
	printf("%d\n", a);
	// printf("%d\n", func1(a)); --------------- 지역변수일 때, 함수호출
	printf("%d\n", func2()); // 전역변수일 때, 함수호출
	printf("%d\n", a);

	// 배열 (동일한 데이터타입을 묶어서 쓸 때)
	int x = 10;	// x라는 이름으로 정수형 변수를 선언
				// 초기값으로 10 할당

	int y[3] = {10,20,30};
				// y라는 이름으로 정수형 배열 변수를 선언
				// 배열크기가 3
				// 초기값 할당은 {}
	printf("%d\n", x);
	printf("%d\n", y[2]);

	return 0;
}

// 함수정의
int func1(int a)	// 매개변수 (지역변수)
{
	printf("%d\n", a);
	a = a + 10;	// (==) a+=10;
	return a;
}

int func2()
{
	printf("%d\n", a);
	a = a + 10;
	return a;
}