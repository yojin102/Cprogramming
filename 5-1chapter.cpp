#include <stdio.h>
void main0409()
{
	// 5.4 �ǽ����� 118pg
	printf("%.1f\n", 5.4);

	int a;
	double b;
	char c1;
	printf("���̸� �Է��ϰ�(������) Enter> ");
	scanf_s("%d", &a);
	printf("Ű�� �Է��ϰ�(�Ǽ���) Enter> ");
	scanf_s("%lf", &b);
	getchar();
	printf("������(A,B,O��) �Է��ϰ� Enter> ");
	scanf_s("%c", &c1);
	printf("�Էµ� ���� %d, Ű %.1f, ������ %c\n\n", a, b, c1);

	// 5.5 �ǽ����� 119pg
	printf("%.1f\n", 5.5);

	double a1, c, x;

	printf("�Ǽ��� 3�� �Է��ϰ� Enter> ");
	scanf_s("%lf %lf %lf", &a1, &b, &c);
	x = 3 * a1 + 4*b - 6*c;
	printf("����1: %f\n", x);
	x = 2 * a1 * a + 4 * b * c;
	printf("����2: %f\n", x);
	x = a1 + b / c;
	printf("����3: %f\n", x);
}