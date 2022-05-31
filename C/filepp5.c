#include<stdio.h>
void main()
	{
		FILE *fp1,*fp2;
		char c;
		fp1=fopen("hello4.txt","w");
		fp2=fopen("hello5.txt","w+");
		fprintf(fp1,"Het is very smart");
		fprintf(fp2,"Het is very cool");
		rewind(fp2);
		while(c!=EOF)
		{
			c=getc(fp2);
			fprintf(fp1,"%c",c);

		}
		fclose(fp1);
		fclose(fp2);
	}
