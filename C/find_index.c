//write a programme to find position of given value.

#include<stdio.h>
void main()
	
	{
		int sum=0,val,a[10]={17,36,27,58,53,53,8,28,96,35};
		printf("Enter the value for which you want to know location\n");
		scanf("%d",&val);
		for(int i=0;i<=9;i++)
		{
			if(a[i]==val)
			{
				printf("Location is %d;\n",i);
				sum++;

			}
		}
		if(sum==0)
			printf("Value not found\n");
	}
