#define CRT_SECURE_NO_WARNINGS  
#include <stdio.h>  

void main()  
{  
char str[10]=" ";  
int i;  

printf("문자열을 입력 ==> ");  
scanf_s("%s", str, sizeof(str));

for (i = strlen(str) - 1; i >= 0; i--)
{  
	printf("%c", str[i]);  
}  
printf("\n");  
}