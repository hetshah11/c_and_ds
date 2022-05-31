#include<stdio.h>
void main()
	{
		int id,a[5]={40,68,83,95,54};
		printf("Enter id of students\n");
		scanf("%d",&id);
		printf("Current marks of student id %d is %d\n",id,a[id]);
		printf("enter updated marks\n");
		scanf("%d",&a[id]);
		printf("New marks of student id %d is %d",id,a[id]);
	}
