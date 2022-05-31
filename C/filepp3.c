#include<stdio.h>
void main()
	{
		FILE *fp;
		int mark;
		char name[10];
		fp=fopen("student_data.txt","w");
		while(mark!=1000)
			{
				printf("Enter name and marks of students\n");
				scanf("%s %d",name,&mark);
				fprintf(fp,"%s\t%d\n",name,mark);

			}
		fclose(fp);
	}
