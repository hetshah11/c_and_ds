//Write a programme to find simple interest

#include<stdio.h>
float p,r;
int n;
float interest(float p,int n,float r)
	{
		return (p*n*r)/100;
	}
void main()
	{
		float ans;
		printf("Enter princilpe,no of years and ROI\n");
		scanf("%f %d %f",&p,&n,&r);
		ans=interest(p,n,r);
		printf("\nInterest is=%f",ans);
		
	}
