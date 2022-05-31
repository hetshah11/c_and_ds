#include<stdio.h>
void main()
	{
		int a[10],sum,i;
		sum=0;
		printf("Enter 10 elements\n");
		for(i=0;i<10;i++)
			{
				scanf("%d",(a+i));	
				sum+=a[i];
			}
		printf("Sum=%d\n",sum);
		
		
	}
