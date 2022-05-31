#include<stdio.h>
void main()
	{
		int base,i,j,row,col,ch;
		printf("Enter row and column\n");
		scanf("%d %d",&row,&col);
		base=2000;
		printf("Enter index for which do you want to find address\npress 1 for column major\npress 2 for row major\n");
		scanf("%d %d %d",&i,&j,&ch);
		if(ch==1)
			printf("Address is %d\n",base+(sizeof(int)*(row*(j-1)+(i-1))));
		else if(ch==2)
			printf("Address is %d\n",base+(sizeof(int)*(col*(i-1)+(j-1))));
			
	}
