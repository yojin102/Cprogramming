#include <stdio.h>
void main0()
{
	// 4.8 �ǽ����� 96pg
	printf("%.1f\n", 4.8);

	const float a = 5.0, b = 7.0;
	float c;
	
	// ����1
	c = a * b - 5;
	printf("����1: %.2f\n", c);

	// ����2
	c = a / 2 + b;
	printf("����2: %.2f\n", c);

	// ����3
	c = 2 * a + 4 * b;
	printf("����3: %.2f\n\n", c);

	// 4.9 �ǽ����� 96pg
	printf("%.1f\n", 4.9);
	// �Ǽ��� ���� - float

	double d = 5.3, f = 7.6;
	printf("����1 : %.2f\n", d/(d+f));
	printf("����2 : %.2f\n", (d - f) / (d + f));
	printf("����3 : %.2f\n", 2*d*d - 4* d * f);
}