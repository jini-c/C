#include <stdio.h>

int a = 100;

void func1()
{
	int a = 200;
	printf("func1()에서의 a의 값 ==> %d\n", a);
}

void main()
{
	func1();
	printf("main()에서 a의 값==> %d\n", a);
}