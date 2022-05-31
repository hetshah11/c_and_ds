#include<stdio.h>
#include "globalstackoperation.h"
void main()
	{
		printf("Enter string\n");
		gets(s);
		l=strlen(s);
		for(i=0;i<l;i++)
			{
				if(s[i]>='0' && s[i]<='9')
					push(stack,&top,s[i],n);
				else
					{
						op2=(int)pop(stack,&top)+48;
						op1=(int)pop(stack,&top)+48;
						switch(s[i])
							{
								case '+':
								op=op1+op2;
								break;

								case '-':
								op=op1-op2;
								break;
					
								case '*':
								op=op1*op2;
								break;
				
								case '/':
								op=op1/op2;
								break;

								case '^':
								op=op1^op2;
								break;
							}
						result=char(op+48);
						push(stack,&top,result,n);
						
					}
			}
			printf("\n\nresult is %d\n",result)
			
	}
