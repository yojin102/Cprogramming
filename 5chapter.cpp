#include <stdio.h>
void main0408()
{
	// 5.1 �ǽ����� 113pg
	printf("%.1f\n", 5.1);

	int a, b;
	printf("10�� ������ �Է��ϰ� Enter> ");
	scanf_s("%d", &a); // scanf�� ����� s�� �ٿ���ߵǴµ� ������ �ʾ� �����߻�
	printf("10�� ������ �Է��ϰ� Enter> ");
	scanf_s("%d", &b);
	printf("a+b=%d \n", a+b);
	printf("a-b=%d \n", a-b);
	printf("a*b=%d \n", a*b);
	printf("a/b=%d \n\n", a/b);

	// 5.2 �ǽ����� 115pg
	printf("%.1f\n", 5.2);

	printf("10�� ������ �Է��ϰ� Enter> ");
	scanf_s("%d", &a);
	printf("10�� ������ �Է��ϰ� Enter> ");
	scanf_s("%d", &b);
	printf("���� a��(8����) : %o\n", a);
	printf("���� a��(16����) : %x\n", a);
	printf("���� b��(8����) : %o\n", b);
	printf("���� b��(16����) : %x\n", b);
	printf("a+b(16����) = %x\n", a+b);
	printf("a+b(8����) = %o\n\n", a+b);

	// 5.3 �ǽ����� 116pg
	printf("%.1f\n", 5.3);

	double x, y;
	printf("�Ǽ��� �Է��ϰ� Enter> ");
	scanf_s("%lf", &x);
	printf("�Ǽ��� �Է��ϰ� Enter> ");
	scanf_s("%lf", &y);
	printf("x+y=%.2f\n", x+y);
	printf("x-y=%.2f\n", x-y);
	printf("x*y=%.2f\n", x*y);
	printf("x/y=%.2f\n", x/y);
}