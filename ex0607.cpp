#include <stdio.h>

// �Լ�����
int func1(int a);
int func2();

int a = 100; // ��������

int main07()
{
	// int a = 100; --------- ��������
	printf("%d\n", a);
	// printf("%d\n", func1(a)); --------------- ���������� ��, �Լ�ȣ��
	printf("%d\n", func2()); // ���������� ��, �Լ�ȣ��
	printf("%d\n", a);

	// �迭 (������ ������Ÿ���� ��� �� ��)
	int x = 10;	// x��� �̸����� ������ ������ ����
				// �ʱⰪ���� 10 �Ҵ�

	int y[3] = {10,20,30};
				// y��� �̸����� ������ �迭 ������ ����
				// �迭ũ�Ⱑ 3
				// �ʱⰪ �Ҵ��� {}
	printf("%d\n", x);
	printf("%d\n", y[2]);

	return 0;
}

// �Լ�����
int func1(int a)	// �Ű����� (��������)
{
	printf("%d\n", a);
	a = a + 10;	// (==) a+=10;
	return a;
}

int func2()
{
	printf("%d\n", a);
	a = a + 10;
	return a;
}