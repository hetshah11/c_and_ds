#include<stdio.h>
extern int p;
extern add(int a,int b);
void main()
	{
		int ans;
		printf("Value of p is %d",p);
		ans=add(2,3);
		printf("Answer is: %d\n",ans);
	}
