void push( char [],int*,char,int);
char pop(char [],int*);
char peep(char [],int*,int,int);
void print(char [],int*);


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
