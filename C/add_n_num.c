#include<stdio.h>
int n;
int add(int n)
	{
		return (n*(n+1))/2;
	}
void main()
	{
		int ans;
		printf("Enter number till which you want to do addition:\n");
		scanf("%d",&n);
		ans=add(n);
		printf("Answer is:%d\n",ans);
	}
