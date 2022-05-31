#include<stdio.h>
void main()
{
	int i,no,sum;
	printf("Enter number\n");
	scanf("%d",&no);
	sum=0;
	if(no==0 || no==1)
		printf("\nNeither prime nor non prime");
	else
	{
	for(i=1;i<=no/2;i++)
		{
			if(no%i==0)
				sum+=i;
		}
	if(sum==1)
		printf("Prime no");
	else
		printf("Non prime no");
	}
}
