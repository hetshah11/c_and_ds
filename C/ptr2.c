#include<stdio.h>
void swap(int *p,int *q)
	{
		int temp;
		temp=*p;
		*p=*q;
		*q=temp;
	}
void main()
	{
		int a,b;
		printf("Enter 2 values\n");
		scanf("%d %d",&a,&b);
		printf("Before swapping\na=%d\nb=%d\n\n",a,b);
		swap(&a,&b);
		printf("After swapping\na=%d\nb=%d",a,b);
	}

