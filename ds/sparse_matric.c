
#include<stdio.h>
void main()
	{
		int m,n,i,j,count;
		j=count=0;
		printf("Enter the size of matrix\n");
		scanf("%d %d",&m,&n);
		int a[m][n],sparse[3][20];
		printf("Enter elements is matrix\n");
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
					{
						scanf("%d",&a[i][j]);
							if(a[i][j]!=0)
								{
								
								sparse[0][count]=i+1;
								sparse[1][count]=j+1;
								sparse[2][count]=a[i][j];
								count++;

								}
					}
			}
			printf("\n\nOriginal matrix\n\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
					{
						printf("%d ",a[i][j]);
					}
				printf("\n");
			}
			printf("\n\nSparse matrix\n\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<count;j++)
					{
						printf("%d ",sparse[i][j]);
					}
				printf("\n");
			}
		
			
	}
