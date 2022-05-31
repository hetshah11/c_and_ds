#include<stdio.h>
#include<string.h>
#include "globalstackfunction.h"
void main()
	{
		char s[20],arr[10],stack[10];
		int l1,i,flag=0,top=0,n=19;
		printf("Enter string\n");
		gets(s);
		l1=strlen(s);
		if(l1%2==0)
				printf("Invalid string\n");
		else
				{
					for(i=(l1/2)+1;i<l1;i++)
						{
							push(stack,&top,s[i],n);
						}
					for(i=1;i<=(l1/2);i++)
						{
							arr[i]=pop(stack,&top);
						}
				}
			for(i=1;i<=(l1/2);i++)
				{
					if(s[i-1]==arr[i])
						flag=1;
					else 
						{
						flag=0;
						break;
						}
				}
			if(flag==1)
				printf("palindrome\n");
			else
				printf("Not palindrome\n");
		
	}
