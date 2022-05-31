#include<stdio.h>
void main()
	{
		int a,*p;
		p=&a;
		a=10;
		printf("Address of a: %p\n",p);
	}
