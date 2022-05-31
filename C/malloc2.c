#include<stdio.h>
#include<stdlib.h>
void main()
	
	{
		int *p,i,m,n,ch;
		 
		printf("How many employees?\n");
		scanf("%d",&n);
		p=(int *)calloc(n,sizeof(int));
		printf("Enter data\n");
		for(i=0;i<n;i++)
			{
				scanf("%d",p+i);
			}
		printf("Do you want to add more employee data?\n");
		scanf("%d",&ch);
		if(ch==1)
			{
				printf("How many new employees?\n");
				scanf("%d",&m);
				p=(int*)realloc(p,sizeof(int)*(m+n));
				printf("enter new data\n");
					for(i=n;i<m+n;i++)
						{
							scanf("%d",p+i);
						}
				printf("\n\nData is as below\n");

					for(i=0;i<m+n;i++)
						{
							printf("%d\n",*(p+i));
						}
			}
		else
			{
				printf("\n\nData is as below\n");
				for(i=0;i<n;i++)
						{
							printf("%d\n",*(p+i));
						}
			}
		free(p);
	}
