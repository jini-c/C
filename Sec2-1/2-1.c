#include <stdio.h> //# ��ó������

void main()
{	//{} ������ ǥ���Ѵ�. ;�� ������ ���� ǥ���Ѵ�. //�ּ��� ǥ���Ѵ�. /* */�� ������ �ּ��� ǥ���Ѵ�.
	// ���� ���� �κ�
	int a, b;
	int result;

	//�ʱ�ȭ
	a = 100;
	b = 50;

	//����
	result = a + b;
	printf("%d + %d = %d \n", a, b, result);

	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;
	printf("%d / %d = %d \n", a, b, result); //,�� �������̴�. // ""�� ���ڿ��� ǥ���Ѵ�. ''�� ���ڸ� ǥ���Ѵ�.
}