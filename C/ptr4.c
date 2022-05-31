#include<stdio.h>
int (*fun)(int,int);
int sum(int a,int b)
	{
		return a+b;
	}

void main()
	{
		int x,y,z;
		printf("Enter 2 values\n");
		scanf("%d %d",&x,&y);
		fun=sum;
		z=(*fun)(x,y);
		printf("\nSum is: %d",z);
		 
	}
