#include <stdio.h>
// �����Լ��� ����ϱ� ���� ���̺귯�� �߰�
#include <math.h>
void main()
{
	int inNum;
	int result;
	double resultDouble;

	printf("������ �Է��ϼ��� ");
	scanf_s("%d", &inNum);
	
	// abs() �Լ� --- ���밪 ���ϴ� �Լ��� ȣ��
	// �Լ�ȣ�� ����� --- �Լ��̸�(�Ű�������)
	// �Ű����� - �Լ�ȣ���� �� (�Լ�����) �Ѱ��ִ� ������
	// �Լ�ȣ���� �Ǹ�, �� ��ġ�� �Լ� ������(��ȯ������)�� ����
	result = abs(inNum);
	printf("������� %d�Դϴ�\n", result);

	// 2�� 3���� ���
	// resultDouble = pow(2.0, 3.0);


	// result�� ������ ���밪�� ������ --- pow()�� �Ű������� �Ǽ����� �޾�
	// �Ű������� �Ѱ��ֱ� ���� ����ȯ�� ����
	resultDouble = pow((double)result, (double)result);
	printf("����� %f\n", resultDouble);
}