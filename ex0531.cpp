#include <stdio.h>

// 4���� ������ �Է¹޾�, ���� ����ϰ� ��ȯ[A,B,C,D,F]�ϴ� �Լ�
// �Է� : �߰�, �⸻, �⼮, ���� ���� (���� 4��)
// ��� : ���� char

// �Լ�����
// ��ȯ�Ǵ� ������Ÿ�� �Լ���(�Ű�����);

// void ��� int�� ��� == main()�Լ����� ��ȯ�� �ִ� ��� �ǹ�

char credit(int a, int b, int c, int d);

// 1�� ������ �Է¹޾Ƽ� +1�� ����� ����ϰ� ������ �Լ� (��ȯ�� ����)
void CI(int a);

void main()
{

	//printf("�߰�, �⸻, �⼮, ���� ������ �Է��ϼ��� ");
	//scanf_s("");
	printf("%c\n", credit(25, 25, 19, 20));

	CI(8);
}

// �Լ�����
char credit(int a, int b, int c, int d)
{
	// (1) �հ��
	int sum = a+b+c+d;
	// (2) ���� ����
	char ch;
	if ((100 >= sum)&&(sum >= 90))
	{
		ch = 'A';
	}
	else if (80 <= sum)
	{
		ch = 'B';
	}
	else if (70 <= sum)
	{
		ch = 'C';
	}
	else if (60 <= sum)
	{
		ch = 'D';
	}
	else
	{
		ch = 'F';
	}

	// (3) ��� ��ȯ
	// üũ -- ��ȯ�����Ͱ� ����Ǿ� �ִµ�, return�� ���� ���� ��� ���
	return ch;
}

void CI(int a)
{
	printf("�Ѿ�� ��+1�� %d�Դϴ�\n", a+1);
	// ��ȯ���� ���� --> ��ȯ�Ǵ� ������Ÿ�� = void
	// return ����� ���� ����

	// üũ
	// ��ȯŸ�� void�ε�, return�� �� ��� ���
}