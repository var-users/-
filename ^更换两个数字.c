#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main()
{
	int a = 3;
	int b = 5;
	printf("����ǰa=%d b=%d\n", a, b);
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;

	printf("������a=%d b=%d", a, b);

	return 0;

}


