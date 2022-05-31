#include<stdio.h>
void main()
	{
		int m,n,zero,p,ne;
		zero=p=n=0;
		printf("Enter size of matrix\n");
		scanf("%d %d",&m,&n);
		int a[m][n],i,j;
		printf("Insert elements in array:\n");
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
					{
						scanf("%d",&a[i][j]);
					}
			}
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
					{
						if(a[i][j]==0)
							zero++;
						else if(a[i][j]>0)
							p++;
						else
							ne++;
					}
			}
		printf("\nNo of zero elements=%d\nNo pf positive elements=%d\nNo of negative elements=%d\n",zero,p,ne);
	}
