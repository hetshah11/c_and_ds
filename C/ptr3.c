#include<stdio.h>
void main()
	{
		int a,*p;
		p=&a;
		a=10;
		printf("Value of a is %d or %d\n",a,*p);
		printf("Address of a: %p or %p\n",p,&a);
		
	}

