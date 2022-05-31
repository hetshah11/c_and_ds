#include<stdio.h>
#include<string.h>
void main()
 
	{
		char a[10],b[10];
		printf("Enter string 1\n");
		gets(a);
		printf("Enter string 2\n");
		gets(b);
		strcpy(a,b);
		printf("b string is copied in string a as below\n");
		puts(a);
	}
