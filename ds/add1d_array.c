#include<stdio.h>
void main()
	{
		int base,i,add;
		base=2000;
		printf("Enter the index for which you want to find address\n");
		scanf("%d",&i);
		add=base+(sizeof(int) * (i-1));
		printf("address is %d\n",add);
	}
