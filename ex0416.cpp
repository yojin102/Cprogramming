#include <stdio.h>
void main0416()
{
	int a, b;
	
	// �ǽ����� 6.1
	printf("�ǽ����� %.1f\n", 6.1);

	printf("1. %d\n", 7/4);
	printf("2. %d\n", 7%4);
	printf("3. %d\n", 9/2);
	printf("4. %d\n\n", 9%2);

	// �ǽ����� 6.2
	printf("�ǽ����� %.1f\n", 6.2);

	printf("���� a, b���� �Է��ϰ� Enter> ");
	scanf_s("%d %d", &a, &b);

	printf("��: %d\n", a/b);
	printf("������: %d\n\n", a%b);

	// �ǽ����� 6.3
	printf("�ǽ����� %.1f\n", 6.3);

	a = 5, b = 10;
	a++; --b;
	a = b % a;
	b = --a + ++b;
	printf("%d  %d\n\n", a,b);

	// �ǽ����� 6.4
	printf("�ǽ����� %.1f\n", 6.4);

	a = 5, b = 10;
	--a; ++b;
	b %= a;
	a /= b;
	printf("%d  %d\n\n", a, b);

	// �ǽ����� 6.5
	printf("�ǽ����� %.1f\n", 6.5);

	double p, r, x, y;
	printf("������ ���� �Է��ϰ� Enter> ");
	scanf_s("%lf", &r);

	p = 3.14; // ����
	x = 2 * p * r; // ���� �ѷ�
	y = p * r * r; // ���� ����

	printf("�ѷ�: %.f\n", x);
	printf("����: %.f\n\n", y);

	// �ǽ����� 6.6
	printf("�ǽ����� %.1f\n", 6.6);

	double c, f, C, F;
	printf("�����µ�, ȭ���µ��� �Է��ϰ� Enter> ");
	scanf_s("%lf %lf", &c, &f);

	F = c * 1.8 + 32;
	C = (f - 32) / 1.8;

	printf("ȭ�� -> ���� : %.f\n", C);
	printf("���� -> ȭ�� : %.f\n", F);
}