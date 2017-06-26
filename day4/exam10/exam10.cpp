// exam10.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	printf("%d %c %d \n", 65, 65, 'A');
	printf("%d %d %d \n", 'A', 'B', 'C');
	printf("%c %c %c \n", 65, 66, 67);
    
	//hello
	printf("%c%c%c%c%c\n", 104, 101, 108, 108, 111);
	
	printf("혈액형을 입력하세요 : ");
	char blood_type;
	scanf_s("%c", &blood_type);

	printf_s("당신의 혈핵형은 : %c 입니다. \n", blood_type);

	int num1, num3;
	double num2;

	printf("등번호를 입력하세요 : ");
	scanf("%d", &num1);
	printf("타율을 입력하세요 : ");
	scanf_s("%lf", &num2);
	printf("나이를 입력하세요 : ");
	scanf("%d", &num3);

	printf_s("%d 번 선수의 타율은 %lf 이고 나이는 %d 살입니다.", num1, num2, num3);

	return 0;
}

