#include <stdio.h> //# 전처리지시

void main()
{	//{} 영역을 표시한다. ;은 문장의 끝을 표시한다. //주석을 표시한다. /* */는 여러줄 주석을 표시한다.
	// 변수 선언 부분
	int a, b;
	int result;

	//초기화
	a = 100;
	b = 50;

	//연산
	result = a + b;
	printf("%d + %d = %d \n", a, b, result);

	result = a - b;
	printf("%d - %d = %d \n", a, b, result);

	result = a * b;
	printf("%d * %d = %d \n", a, b, result);

	result = a / b;
	printf("%d / %d = %d \n", a, b, result); //,는 구분자이다. // ""는 문자열을 표시한다. ''는 문자를 표시한다.
}