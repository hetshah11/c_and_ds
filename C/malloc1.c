#include<stdio.h>
#include<stdlib.h>
void main()
	{
		int *fp;
		fp=(int*)malloc(sizeof(int));
		printf("Memory allocated at %p\nInitial value is %d\n",fp,*fp);
		*fp=25;
		printf("New value is %d",*fp);
		free(fp);
	}
