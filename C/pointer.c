#include<stdio.h>
void main()
	{
		int a,*p,**q;
		a=10;
		p=&a;
		q=&p;
		printf("Value of a is %d %d %d\n",a,*p,**q);
		printf("Address of a is %p %p\n",p,*q);
		printf("Address of p is %p\n",q);
	}
