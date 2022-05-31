#include <stdio.h>
void enque(char [],int*,int*,char,int);
char eq_front(char [],int*,int*,char,int);
char deque(char [],int*,int*);
char dq_rear(char [],int*,int*);
void print(char[],int*,int*,int);
void main()
    {
        int front,rear,n,ch;
        n=5;
        front=rear=0;
        char queue[n+1],e;
        while(ch!=6)
        {
             printf("\npress 1 for enque\npress 2 for deque\npress 3 for eq-front\npress 4 for dq-rear\npress 5 for print\n press 6 for quit\n");
            scanf("%d",&ch);
		switch(ch)
			{
				case 1:
					 printf("\nEnter element\n");
                			 scanf(" %c",&e);
                			 enque(queue,&front,&rear,e,n);
					 break;

				case 2:
					 printf("\nDequed element is %c\n",deque(queue,&front,&rear));
					 break;

				case 3:
					 printf("\nEnter element\n");
                			 scanf(" %c",&e);
                			 eq_front(queue,&front,&rear,e,n);
					 break;

				case 4:
					printf("\nDequed element is %c\n",dq_rear(queue,&front,&rear));
					break;
				case 5:
					 print(queue,&front,&rear,n);
					 break;
				
					

					
		
			}
           
                   
        }
       
    }
void enque( char queue[],int *front,int *rear, char e,int n)
        {
            if(*rear>=n)
                printf("Queue Overflow\n");
            else if(*front==0 & *rear==0)
                {
                    *rear=*rear+1;
                    queue[*rear]=e;
                    *front=*front+1;
                }
            else
                {
                    *rear=*rear+1;
                    queue[*rear]=e;
                }
        }
char deque(char queue[],int *front,int *rear)
    {
            int k;
            if(*front==0 && *rear==0)
                {
                   printf("Queue underflow\n");
                    return 32;
                }
               
            else if(*front==*rear && *front!=0)
                {
                    k=*front;
                    *front=*rear=0;
                    return queue[k];
                }
            else
                {
                   
                    *front=*front+1;
                    return queue[*front-1];
                }
               
               
    }
char eq_front(char queue[],int *front,int *rear,char e,int n)
	{
	//char y;
		if(*front==0)
			{
				printf("queue empty\n");
				return ' ';
			}
			
		else if(*front==1)
			{
				printf("Queue overflow\n");
				return ' ';
			}
			
		*front=*front-1;
		queue[*front]=e;
	}
char dq_rear(char queue[],int *front,int *rear)
	{
		char y;
		if(*rear==0)
			{
				printf("queue underflow\n");
				return ' ';
			}
			
			
		y=queue[*rear];
		if(*rear==*front)
			{
				*rear=*front=0;
			}
		else
			*rear=*rear-1;

		return y;
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
            if(i<(*front))
                printf("%c ",'_');
            else if(i>=*front && i<=*rear)
            printf("%c ",queue[i]);
		else
		printf("%c ",'_');
        }
	}
    }

