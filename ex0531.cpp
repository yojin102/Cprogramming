#include <stdio.h>

// 4개의 정수를 입력받아, 합을 계산하고 반환[A,B,C,D,F]하는 함수
// 입력 : 중간, 기말, 출석, 과제 점수 (정수 4개)
// 출력 : 문자 char

// 함수선언
// 반환되는 데이터타입 함수명(매개변수);

// void 대신 int를 썼다 == main()함수에서 반환이 있다 라는 의미

char credit(int a, int b, int c, int d);

// 1개 정수를 입력받아서 +1한 결과를 출력하고 끝나는 함수 (반환값 없음)
void CI(int a);

void main()
{

	//printf("중간, 기말, 출석, 과제 점수를 입력하세요 ");
	//scanf_s("");
	printf("%c\n", credit(25, 25, 19, 20));

	CI(8);
}

// 함수정의
char credit(int a, int b, int c, int d)
{
	// (1) 합계산
	int sum = a+b+c+d;
	// (2) 학점 구분
	char ch;
	if ((100 >= sum)&&(sum >= 90))
	{
		ch = 'A';
	}
	else if (80 <= sum)
	{
		ch = 'B';
	}
	else if (70 <= sum)
	{
		ch = 'C';
	}
	else if (60 <= sum)
	{
		ch = 'D';
	}
	else
	{
		ch = 'F';
	}

	// (3) 결과 반환
	// 체크 -- 반환데이터가 선언되어 있는데, return을 쓰지 않은 경우 경고
	return ch;
}

void CI(int a)
{
	printf("넘어온 값+1은 %d입니다\n", a+1);
	// 반환값이 없음 --> 반환되는 데이터타입 = void
	// return 명령을 쓰지 않음

	// 체크
	// 반환타입 void인데, return을 쓴 경우 경고
}