#include <stdio.h>
void enque(char [],int*,int*,char,int);
char deque(char [],int*,int*,int);
void print(char[],int*,int*,int);
void main()
    {
        int front,rear,n,ch;
        n=5;
        front=rear=0;
        char queue[n+1],e;
        while(ch!=4)
        {
             printf("\npress 1 for enque\npress 2 for deque\npress 3 for print\npress 4 for quit\n");
            scanf("%d",&ch);
            if(ch==1)
            {
                printf("\nEnter element\n");
                scanf(" %c",&e);
                enque(queue,&front,&rear,e,n);
            }
                else if(ch==2)
                {
                    printf("\nDequed element is %c\n",deque(queue,&front,&rear,n));
                }
                else if(ch==3)
                    print(queue,&front,&rear,n);
        }
       
    }
void enque( char queue[],int *front,int *rear, char e,int n)
        {
		int m;
          
             if(*rear==n)
                {
		    m=*rear;
                    *rear=1;
		    
			
                }
		else
			{
			m=*rear;
			*rear=*rear+1;
				
			}			
			

		if(*rear==*front)
		{
		printf("%d ",*rear);
                printf("\nQueue overflow\n");
		*rear=m;
		printf("%d ",*rear);
		}
 		else
		{
		queue[*rear]=e;
		printf("%d ",*rear);
		}

		if(*front==0)
			*front=1;
	
        }
char deque(char queue[],int *front,int *rear,int n)
    {
            int k,l;
            if(*front==0)
                {
                   printf("Queue underflow\n");
                    return 32;
                }
               
            else 
                  l=queue[*front];
            if(*front==*rear)
                {
                    k=*front;
                    *front=*rear=0;
                    return queue[k];
                }
	    if(*front==n)
		*front=1;
	    else
		*front=*front+1;

               return l;
               
    }
void print(char queue[],int *front,int *rear,int n)
    {
        int i;
        printf("\n\n");
	if(*front==0)
		for(i=1;i<=n;i++)
			{
				printf("%c ",'_');
			}
	else
		{
        		for(i=1;i<=n;i++)
        			{
            				if(i<(*front) && i>(*rear))
                				printf("%c ",'_');
           
					else
						printf("%c ",queue[i]);
        			}
		}
    }

