// exam10.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	printf("%d %c %d \n", 65, 65, 'A');
	printf("%d %d %d \n", 'A', 'B', 'C');
	printf("%c %c %c \n", 65, 66, 67);
    
	//hello
	printf("%c%c%c%c%c\n", 104, 101, 108, 108, 111);
	
	printf("�������� �Է��ϼ��� : ");
	char blood_type;
	scanf_s("%c", &blood_type);

	printf_s("����� �������� : %c �Դϴ�. \n", blood_type);

	int num1, num3;
	double num2;

	printf("���ȣ�� �Է��ϼ��� : ");
	scanf("%d", &num1);
	printf("Ÿ���� �Է��ϼ��� : ");
	scanf_s("%lf", &num2);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &num3);

	printf_s("%d �� ������ Ÿ���� %lf �̰� ���̴� %d ���Դϴ�.", num1, num2, num3);

	return 0;
}

