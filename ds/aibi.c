#include<stdio.h>
#include "globalstackfunction.h"

void main()
	{	
		int n=20,i,top,flag,l; 
		char stack[21],s[21];
		printf("Enter string\n");
		gets(s);
		l=strlen(s);
		top=0;
		push(stack,&top,'e',n);
		for(i=0;i<l;i++)
			{
				if(s[i]=='b')
						{
							if(i==0)
								{
								flag=0;
								break;
								}
							else
								pop(stack,&top);
							
								
						}
				else if(s[i]=='a')
						{
							if(s[i-1]=='b')
								{
								flag=0;
								break;
								}		
							else
								push(stack,&top,s[i],n);
						}
			}
		if(flag==0)
			printf("Not valid\n");
		else
			{
				if(top==1)
					printf("Valid\n");
				else 
					printf("Not valid\n");
			}
		
	}
