#include<stdio.h>
void main()
{
	int p,q,r,s,max,i,j;
	printf("Enter size of matrix 1:");
	scanf("%d %d",&p,&q);
	printf("Enter size of matrix 2:");
	scanf("%d %d",&r,&s);
	int a[p][q],b[r][s];

	printf("Enter values in matrix 1:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
	printf("Enter values in matrix 2:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<s;j++)
			{
			scanf("%d",&b[i][j]);
			}
		}
	max=a[1][1];
	for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
			if(a[i][j]>max)
				max=a[i][j];
			}
		}
	for(i=0;i<r;i++)
		{
			for(j=0;j<s;j++)
			{
				if(b[i][j]>max)
				max=b[i][j];
			}
		}
	printf("\n\nMaximum value: %d",max);
	
}

