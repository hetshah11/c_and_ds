#include<stdio.h>
void main()
	{
		int num,gus;
		int ch;
		ch=1;
	while(ch!=0)
           {
		srand(time(0));
		num=1+(rand()%100);
		printf("\n%d\n",num);
	
		while(num!=gus)
	      {
		printf("Enter your guessed number\n");
		scanf("%d",&gus);
		if(num==gus)
			printf("Congratulations! Your guess is correct\n");
		else if(num<gus)
			printf("Too high!\n");
		else 

			{printf("Too low!\n");}
	      }
	     printf("\nDo you want to continue\n");
	     scanf("%d",&ch);
	     
           }

	}
