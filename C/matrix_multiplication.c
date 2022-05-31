#include<stdio.h>
void main()
	{
		int p,q,r,s;
		printf("Enter size of 1st matrix");
		scanf("%d %d",&p,&q);
		printf("Enter size of 2nd matrix");
		scanf("%d %d",&r,&s);
		int a[p][q],b[r][s],c[p][s],i,j,k;

		if(q!=r)
			printf("Multiplication not possible");

		else
			{
				printf("Enter values in matrix 1\n");
				for(i=0;i<p;i++)
					{
						for(j=0;j<q;j++)
							{
								scanf("%d",&a[i][j]);

							}
					}
				printf("Enter values in matrix 2\n");
				for(i=0;i<r;i++)
					{
						for(j=0;j<s;j++)
							{
								scanf("%d",&b[i][j]);

							}
					}
				printf("Your matrices are as below:\n\n");
				for(i=0;i<p;i++)
					{
						for(j=0;j<q;j++)
							{
								printf("%d ",a[i][j]);

							}
					   printf("\n");
					}
				printf("\n\n");
				for(i=0;i<r;i++)
					{
						for(j=0;j<s;j++)
							{
								printf("%d ",b[i][j]);

							}
						printf("\n");
					}
			  printf("Multiplication\n\n");
				for(i=0;i<p;i++)
					{
						for(j=0;j<s;j++)
							{
							   c[i][j]=0;
								for(k=0;k<q;k++)
								{
									c[i][j]+=a[i][k]*b[k][j];
								}

							}
						
					}
				printf("\n\nanswer\n\n");
				for(i=0;i<p;i++)
					{
						for(j=0;j<s;j++)
							{
								printf("%d  ",c[i][j]);

							}
					   printf("\n");
					}

			}
	}
