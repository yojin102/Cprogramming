#include <stdio.h>
void main0404()
{
	// 변수선언
	int kor, eng, mat; // 국영수 점수

	printf("국어 영어 수학 점수를 입력하세요. ");
	/*
	scanf_s("%d", &kor);
	scanf_s("d", &eng);
	scanf_s("%d", &mat);
	*/

	// 오류 메시지
	// int a; // (1)변수선언
	// a = 100; // (2)값할당

	// const int b = 200; // 상수선언
	// b = 300;

	// 한 번 입력받음
	scanf_s("%d %d %d", &kor, &eng, &mat);

	// 총점 kor+eng+mat
	printf("총점 = %d점, 평균점수 = %d\n", kor+eng+mat, (kor+eng+mat)/3);
	// printf("총점 = %d점, 평균점수 = %.1f\n", kor+eng+mat, (float)(kor+eng+mat)/3.0f);
	// printf("총점 = %d점, 평균점수 = %.2f\n", kor+eng+mat, (double)(kor+eng+mat)/3.0);


	// 0404
	int a = 10, b = 3;
	// printf("산술연산자 결과를 출력하세요...");
	printf("%d, %d, %d, %d, %d\n", a+b, a-b, a*b, a/b, a%b);

	// 증가, 감소 연산자
	printf("%d\n", a++);
	printf("%d\n", ++a);

	a += b; // a+b를 한 다음, a에 대입(overwrite)
	printf("%d\n", a);

	double r;
	const double pi = 3.14159;

	float c = 10.0, d = 3.0;
	printf("%.1f, %.1f, %.1f, %.1f\n", c+d, c-d, c*d, c/d);
}