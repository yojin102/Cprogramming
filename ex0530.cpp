#include <stdio.h>
#include <math.h>

// �Լ����� ���� (�Լ� �̸�. ��� �������)
// ������Ÿ�� �Լ���(�Ű�����);
int ever(int a);
int TH(int i);
int YY(int a, int b);

// �Լ�����, �Լ�����, �Լ�ȣ���� �ϼ���
// 4���� ������ �Է¹޾�, ���� ����ϰ� ��ȯ[A,B,C,D,F]�ϴ� �Լ�
// �Է� : �߰�, �⸻, �⼮, ���� ���� (���� 4��)
// ��� : ���� char

void main()
{
	// 249 / �ǽ����� 10.4
	double x, y;
	printf("������ �� �Ǽ��� �Է��ϼ��� ");
	scanf_s("%lf %lf", &x, &y);

	printf("��1 : %lf\n", pow(x,2.0)+pow(y,2.0));
	printf("��2 : %lf\n", pow((x+y),2.0));
	printf("��3 : %lf\n", pow(fabs(x+y),2.0));
	printf("��4 : %lf\n", sqrt(pow(x,2.0)+pow(y,2.0)));

	printf("������ �Է��ϼ��� ");
	int f;
	scanf_s("%d", &f);

	printf("����� %d�Դϴ�\n", ever(f));
	printf("���밪 ����� %d�Դϴ�\n", TH(f));

	// �ݺ����� �Ἥ, 1~100 ������ ������ ����ϼ���.
	int i;
	for (i = 1; i <= 100; i++)
	{
		printf("%d�� ������ %d�Դϴ�\n", i, ever(i));
	}

	// YY�Լ� ȣ��
	printf("���� ����� %d�Դϴ�\n", YY(100, 200));
}

// �Լ�����
// ������Ÿ�� �Լ���(�Ű�����){ ó���ϴ� ���� }
// �Լ��� �Է�, ó���κ�, ����� ���µ�
// �Է��� �Ű����� ��ġ��, ó���κ��� ó���ϴ� ���� ��ġ��, ����� ������Ÿ�� ��ġ��.

int ever(int a)
{
	// (1) ������ ���
	int res;
	res = a * a;

	// (2) ����� ��ȯ
	return res; // ��ȯ�ϴ� ���
}

int TH(int i)
{
	// ���밪 ���
	int res;
	if (i >= 0)
	{
		res = i;
	}
	else
	{
		res = -i;
	}

	// ��� ��ȯ
	return res;
}

int YY(int a, int b)
{
	return (a+b);
}