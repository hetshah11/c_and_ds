#include<stdio.h>
void main()
	{
	   int a[5],i;
	   printf("Enter elements:\n");
	   for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
	   printf("Reverse array is as below\n");
	   for(i=4;i>=0;i--)
		{
			printf("%d ",a[i]);
		}
	}
