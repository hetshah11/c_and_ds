#include<stdio.h>
void fun1(void);
void fun2(void);
void fun3(void);
void fun1()
	{
		int a=10;
		fun2();
	}
void fun2()
	{
		int b=20;
		fun3();
	}
void fun3()
	{
		int c=30;
	}

void main()
	{
		printf("Hello world!");
		fun1();
	}
	
