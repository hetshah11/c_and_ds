#include<stdio.h>
void main()
	{
	int a[5]={50,40,30,20,10},i,j,temp;
	for(i=0;i<5;i++)
		{
			for(j=i+1;j<5;j++)
				{
					if(*(a+i)>*(a+j))
						{
							temp=*(a+i);
							*(a+i)=*(a+j);
							*(a+j)=temp;
							
						}
				}
		}
	for(i=0;i<5;i++)
		{
			printf("%d ",*(a+i));
		}
	}
