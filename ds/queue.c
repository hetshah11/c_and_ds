#include <stdio.h>
void enque(char [],int*,int*,char,int);
char deque(char [],int*,int*);
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
                    printf("\nDequed element is %c\n",deque(queue,&front,&rear));
                }
                else if(ch==3)
                    print(queue,&front,&rear,n);
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

