#include<stdio.h>
void push( char [],int*,char,int);
char pop(char [],int*);
char peep(char [],int*,int,int);
void print(char [],int*);


void main()
	{
		int n=5;
		char stack[n+1],x;
		int ch,t,index;
		t=0;
		while(ch!=6)
		{
		printf("\nPress 1 for push\npress 2 for pop\npress 3 for peep\npress 4 for change\npress 5 for print\npress 6 for quit\n");
		scanf("%d",&ch);
		switch(ch)
			{
				case 1:
					
						printf("\nEnter element\n");
						scanf(" %c",&x);
						push(stack,&t,x,n);
						printf("\ntop is %d\n",t);
						break;
					
				case 2:
					
						
						printf("\nPopped element is %d\n",pop(stack,&t));
						break;
				case 3:
						printf("\nEnter index\n");
						scanf("%d",&index);
						
						printf("\nPeeped element is %d\n",peep(stack,&t,index,n));
					
				case 5:
					
						print(stack,&t);
						break;
					
			}
		}
	}
void push( char stack[], int* top, char e, int n)
	{
		if(*top>=n)
			printf("\nStack overflow\n");
		else
			{
				*top=*top+1;
				stack[*top]=e;	
			}
	}
char pop(char stack[],int* top)
	{
		if(*top<1)
			{
			printf("\nStack underflow\n");
			return '0';
			}
		else
			{
				
				*top=*top-1;
				return stack[*top+1];
				
			}
			
	}
char peep(char stack[],int* top,int index,int n)
	{
		if(*top<1)
			{
			printf("\nStack underflow\n");
			return '0';
			}
		else
			return stack[*top-index+1]; 
	}
void print(char stack[], int* top)
		{
			int i;
				for(i=*top;i>=1;i--)
					{
						printf(" %c\n",stack[i]);
					}
		}
