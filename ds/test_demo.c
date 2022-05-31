#include<stdio.h>
int a=10;
void fun(void);
void main()
	{
		int a,*ptr;
		ptr=&a;
		a=20;
		printf("%d\n",a);
		fun(&a);
		printf("%d\n",*ptr);
		
	}

void fun(int *ptr)
	{
		int a;
		a=30;
		a=&ptr;
		printf("%d\n",*ptr);
	}
