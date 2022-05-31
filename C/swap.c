#include<stdio.h>
int a,b,temp;
void swap();
	
void main()
	{
		printf("Enter 2 values:\n");
		scanf("%d %d",&a,&b);
		printf("Before swapping:\na=%d\nb=%d\n",a,b);
		swap();
		printf("After swapping:\na=%d\nb=%d\n",a,b);
	}

void swap()
	{
		temp=a;
		a=b;
		b=temp;
	}
