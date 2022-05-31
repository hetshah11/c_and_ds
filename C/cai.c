#include<stdio.h>
#include<time.h>
void main()
{
int ran1,ran2,ans,chance=5;
int l=1,u=9;
while(chance!=0)
	{
		srand(time(0));
		ran1=(rand()%u-1+1)+1;
		srand(time(0)+1);
		ran2=(rand()%u-1+1)+1;
		printf("%d %d\n",ran1,ran2);
		scanf("%d",&ans);
		if(ans==ran1+ran2)
			{
				u=u*10;
				l*=10;
				printf("Very good...Next step\n");
			}
		else
			{
				chance--;
				printf("Left chance:=%d\n",chance);
			}
	}
}
