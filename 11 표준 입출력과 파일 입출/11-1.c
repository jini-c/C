#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a;
	float b;
	char ch;
	char s[20];

	printf("정수를 입력 : ");
	scanf("%d", &a);
	printf("실수를 입력 : ");
	scanf("%f", &b);
	printf("문자를 입력 : ");
	scanf(" %c", &ch);
	printf("문자열을 입력 : ");
	scanf("%s", s);

	printf("\n 정수의 10진수 ==> %d\n", a);
	printf(" 정수의 8진수 ==> %o\n", a);
	printf(" 정수의 16진수 ==> %x\n", a);
	printf(" 실수의 10진수 ==> %f\n", b);
	printf(" 실수(공학용) ==> %e\n", b);
	printf(" 문자 ==> %c\n", ch);
	printf(" 문자열 ==> %s\n", s);

}