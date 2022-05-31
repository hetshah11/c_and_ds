// find total bill
#include<stdio.h>

void main()
	{
		int qt[3][2],i,j;
		
		float sum,a[2][5]={1,2,3,4,5,29.5,45,49,95.5,68.5};
		sum=0;
		printf("Enter values and quantities");
		for(i=0;i<3;i++)
			{
			for(j=0;j<2;j++)
				{
					scanf("%d",&qt[i][j]);
				}
			}
		for(i=0;i<3;i++)
			{
				int k=qt[i][0]-1;
				switch(qt[i][0])
					{
					   case 1:
					   sum+=qt[i][1]*a[1][k];
					   break;

					   case 2:
					   sum+=qt[i][1]*a[1][k];
					   break;
				
					   case 3:
					   sum+=qt[i][1]*a[1][k];
					   break;

				           case 4:
					   sum+=qt[i][1]*a[1][k];
					   break;


					   case 5:
					   sum+=qt[i][1]*a[1][k];
					   break;



						
					}
			}
		printf("\nTotal is: %f",sum);

		
		
		
	}
