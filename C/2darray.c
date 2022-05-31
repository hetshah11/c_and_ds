//Sum of 2 matrices

#include<stdio.h>
void main()
	{       
		int m,n,i,j;
		printf("Enter size of matrix");
		scanf("%d %d",&m,&n);
		int a[m][n],b[m][n];

		printf("Enter values in 1st matrix");
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",&a[i][j]);
				}
			}
		printf("Enter values in 2nd matrix:");
                 for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					scanf("%d",&b[i][j]);
				}
			}
		printf("Your matrices are as below\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%d ",a[i][j]);
				}
			   printf("\n");
			}
		printf("\n\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%d ",b[i][j]);
				}
			    printf("\n");
			}
		printf("\n-------------------------\n");
		printf("Sum of matrices:\n");
		for(int i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%d ",a[i][j]+b[i][j]);
				}
			  printf("\n");
			}



			
	}
