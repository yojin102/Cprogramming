#include <stdio.h>
void main0()
{
	// 4.1 �ǽ����� 88pg
	printf("%.1f\n", 4.1);
	
	int a = 5, b = 7; // ��������, ���Ҵ�
	int c;

	// ����1
	c = a * b - 5; 
	printf("����1: %d\n", c);

	// ����2
	c = a / 2 + b; 
	printf("����2: %d\n", c);

	// ����3
	c = 2 * a + 4 * b;
	printf("����3: %d\n\n", c);

	// 4.2 �ǽ����� 88pg
	printf("%.1f\n", 4.2);

	float a1 = 5.3, b1 = 7.6; // ��������, ���Ҵ�
	float c1;				  // �ռ� int�� ���������ؼ� float a1,b1,c1���� ������.

	// ����1
	c1 = a1 / (a1 + b1);
	printf("����1: %f\n", c1);

	// ����2
	c1 = (a1 - b1) / (a1 + b1);
	printf("����2: %f\n", c1);

	// ����3
	c1 = 2 * a1 * a1 - 4 * a1 * b1;
	printf("����3: %f\n\n", c1);


	// 4.3 �ǽ����� 90pg
	printf("%.1f\n", 4.3);

	a = 3, b = 5; // �տ� int ������ �߱� ������ �� �Ҵ縸 ����. (7��)
	a = a + b;
	b = b + a;
	
	printf("���α׷� 1\n");
	printf("%d\n", a);
	printf("%d\n", b);

	a = 3, b = 5;
	a = a - b;
	b = b - a;

	printf("���α׷� 2\n");
	printf("%d\n", a);
	printf("%d\n\n", b);

	// 4.4 �ǽ����� 90pg
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

	// 4.5 �ǽ����� 90pg
	printf("%.1f\n", 4.5);

	a = a + b; // �ǽ����� 4.4����(63��) a,b �� ���Ҵ� ����� ������ �ٷ� �� ��. 8
	b = a - b; // 3
	a = a - b; // 5

	printf("%d\n", a);
	printf("%d\n\n", b);

	// 4.6 �ǽ����� 94pg
	printf("%.1f\n", 4.6);

	a = 3, b = 5; // ���� �ٲ����Ƿ� �ٽ� �� �Ҵ�
	
	c = a;
	a = b;
	b = c;

	printf("%d\n", a);
	printf("%d\n\n", b);

	// 4.7 �ǽ����� 94pg
	printf("%.1f", 4.7);


}