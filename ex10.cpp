#include <stdio.h>
#include <math.h>
void main007()
{
	// 247pg �ǽ����� 10.1
	printf("�ǽ����� %.1f\n", 10.1);

	int i;
	
	do {
		printf("0 �Է½� ����\n");
		printf("���� �Է� �� Enter> ");
		scanf_s("%d", &i);
		printf("%d�� ����=%d\n", i, abs(i));

	}
	while (i != 0);

	// 248pg �ǽ����� 10.2
	printf("\n�ǽ����� %.1f\n", 10.2);

	double x, y;
	printf("������ �� �Ǽ� x�� y�� �Է��ϼ���> ");
	scanf_s("%lf %lf", &x, &y);

	printf("pow(x,y)=%f\n", pow(x,y));
	printf("pow(y,x)=%f\n", pow(y,x));

	// 248pg �ǽ����� 10.3
	printf("\n�ǽ����� %.1f\n", 10.3);
	printf("");

	// 249pg �ǽ����� 10.4
	printf("\n�ǽ����� %.1f\n", 10.4);
	
	printf("������ �� �Ǽ� x�� y�� �Է��ϼ���> ");
	scanf_s("%lf %lf", &x, &y);

	printf("��1 : %lf\n", pow(x, 2.0) + pow(y, 2.0));
	printf("��2 : %lf\n", pow((x + y), 2.0));
	printf("��3 : %lf\n", pow(fabs(x + y), 2.0));
	printf("��4 : %lf\n", sqrt(pow(x, 2.0) + pow(y, 2.0)));


}