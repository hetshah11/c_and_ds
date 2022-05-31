#include<stdio.h>
void main()
	{
		FILE *fp1,*fp2;
		char c;
		fp1=fopen("hello2.txt","r");
		fp2=fopen("hello3.txt","w");
		while(c!=EOF)
			{
				c=getc(fp1);
				putc(c,fp2);
			}
		fclose(fp1);
		fclose(fp2);
	}
