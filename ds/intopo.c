#include<stdio.h>
#include<string.h>
#include "globalstackfunction.h"
int precedence(char);
void main()
	{
		int i,j=0,top=0,n,l,count=0;
		printf("Enter string\n");
		char s[30];
		gets(s);
		l=strlen(s);
		printf("\n\n%d\n\n",l);
		n=l+1;
		char op_array[l],stack[l];
		for(i=0;i<l;i++)
			{
				if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) )
					{					
					op_array[j]=s[i];
					j++;
					}
				
				else if(s[i]=='(')
					{
						push(stack,&top,s[i],n);
						count++;
						
					} 
				else if(s[i]==')')
					{
						while(stack[top]!='(')
							{
								op_array[j]=pop(stack,&top);
								j++;
								
							}
						pop(stack,&top);
					}
				else 
					{
					   while(precedence(stack[top])>=precedence(s[i]))
						
							{							
							op_array[j]=pop(stack,&top);
							j++;
							
							}
						
							push(stack,&top,s[i],n);
					}
			}
		while(top!=0)
			{	
				op_array[j]=pop(stack,&top);
				j++;
			}
		printf("\n\n");
		for(i=0;i<l-count;i++)
			{
				if(op_array[i]!='(')
				printf("%c",op_array[i]);
			}
		
	}
int precedence(char a)
	{
		if(a==' ')
			return 0;
		else if(a=='+' || a=='-')
			return 1;
		else if(a=='*' || a=='/')
			return 2;
		else if(a=='^')
			return 3;
		else if(a=='(')
			return -1;
	}
