#include<stdio.h>
void main()
	{
		FILE *fp1,*fp2;
		char c1,c2;
		int flag;
		fp1=fopen("compare1.txt","w+");
		fp2=fopen("compare2.txt","w+");
		fprintf(fp1,"Hello! My name is file1");
		fprintf(fp2,"Hello! My name is file1");
		rewind(fp1);
		rewind(fp2);
		while(c1!=EOF)
			{
				c1=getc(fp1);
				c2=getc(fp2);
				if(c1==c2)
					flag=1;
				else
					{
					flag=0;
					break;
					}
			}
		if(flag==1)
			
				printf("Content is same");
		else
			printf("Content is diffrent");
		fclose(fp1);
		fclose(fp2);
		
			
	}
