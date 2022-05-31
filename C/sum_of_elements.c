//Write a programme for finding sum of all elements in array
#include<stdio.h>

void main()
	{
		int sum,a[10]={3,5,6,8,9,6,7,8,9,2};
		sum=0;

		for(int i=0;i<10;i++)
			{
				sum+=a[i];
			}
		printf("Sum is: %d\n",sum);
	}
