//write a programme to find the smallest value from given array

#include<stdio.h>
void main()
	{
		int min,a[10]={46,28,83,29,57,49,4,38,97,30};
		min=a[0];
		for(int i=1;i<10;i++)
			{
				if(a[i]<min)
					min=a[i];
			}
		printf("Smallest value is %d\n",min);
	}
