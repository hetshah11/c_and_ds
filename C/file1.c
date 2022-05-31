#include<stdio.h>
void main()
	{
		FILE *fp;	
		char c;
		fp=fopen("hello.txt","w");
		fprintf(fp,"Hello!, How are you!");
		fclose(fp);
		fp=fopen("hello.txt","r");
		while(c!=EOF)
			{
				c=getc(fp);
				printf("%c",c);
				
			}
	}
