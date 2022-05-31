//write a programme to find even and odd elements in array

#include<stdio.h>
void main()
	{
		int a[5],even,odd,i;
		odd=even=0;
		printf("Enter elements in array\n");
		for(i=0;i<5;i++)
			{
				
 				scanf("%d",&a[i]);
			}
		for(i=0;i<5;i++)
			{
				if(a[i]%2==0)
					even++;
				else
					odd++;
			}
		printf("No. of even elements =%d\nNo.of odd elements =%d",even,odd);

	}
