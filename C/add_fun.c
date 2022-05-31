//write a code for addition using function

#include<stdio.h>
int add(int,int);
void main()
	{
		int a,b,c;
		printf("Enter 2 numbers:\n");
		scanf("%d %d",&a,&b);
                c=add(a,b);
		printf("\nAnswer is: %d",c);
		
	}
int add(int x,int y)
	{
		return x+y;
	}
