#include <stdio.h>
void main0404()
{
	// ��������
	int kor, eng, mat; // ������ ����

	printf("���� ���� ���� ������ �Է��ϼ���. ");
	/*
	scanf_s("%d", &kor);
	scanf_s("d", &eng);
	scanf_s("%d", &mat);
	*/

	// ���� �޽���
	// int a; // (1)��������
	// a = 100; // (2)���Ҵ�

	// const int b = 200; // �������
	// b = 300;

	// �� �� �Է¹���
	scanf_s("%d %d %d", &kor, &eng, &mat);

	// ���� kor+eng+mat
	printf("���� = %d��, ������� = %d\n", kor+eng+mat, (kor+eng+mat)/3);
	// printf("���� = %d��, ������� = %.1f\n", kor+eng+mat, (float)(kor+eng+mat)/3.0f);
	// printf("���� = %d��, ������� = %.2f\n", kor+eng+mat, (double)(kor+eng+mat)/3.0);


	// 0404
	int a = 10, b = 3;
	// printf("��������� ����� ����ϼ���...");
	printf("%d, %d, %d, %d, %d\n", a+b, a-b, a*b, a/b, a%b);

	// ����, ���� ������
	printf("%d\n", a++);
	printf("%d\n", ++a);

	a += b; // a+b�� �� ����, a�� ����(overwrite)
	printf("%d\n", a);

	double r;
	const double pi = 3.14159;

	float c = 10.0, d = 3.0;
	printf("%.1f, %.1f, %.1f, %.1f\n", c+d, c-d, c*d, c/d);
}