#include<stdio.h>
int i,d,wd,uidp,pinp,flag;
struct account
	{
		int uid;
		int pin;
		int bal;
	}u[5];
void db()
{
for(i=0;i<4;i++)
	{
		u[i].uid = i+1001;
		u[i].pin = i+1234;
		u[i].bal = 5000+(i*1000);
	}
}
void add_user(int newbal)
	{	
		
		u[i].uid=1001+i;
		u[i].pin=1234+i;
		u[i].bal=newbal;
		printf("Your account opened\nyour user id is %d and your pin is %d\n",u[i].uid,u[i].pin);
	}
 
void authenticate()
	{
		int attempt=3;
		printf("Please enter your user id\n");
		scanf("%d",&uidp);
		printf("Please enter your passeord\n");
		scanf("%d",&pinp);
		for(i=0;i<5;i++)
			{
				if(u[i].uid==uidp)
					{
						if(pinp==u[i].pin)
						{
						flag=1;
						}

						else
						{
						while(attempt!=0)
						{
						printf("Wrong pin!please try again\n");
						attempt--;
						printf("Enter pin\n");
						scanf("%d",&pinp);
							if(pinp==u[i].pin)
							{
							flag=1;
							break;
							}
						}
						if(attempt==0)
						printf("CARD BLOCKED! Please try again after 24 hours\n");
						}
					  break;
					}
			  
				
			}
				
	}

int bal_check()
	{
		return u[i].bal;
	}
void withdrawl()
	{	
		printf("\nAmount to be withdwan\n");
		scanf("%d",&wd);
		if(wd>u[i].bal)
			{
			printf("Insufficint balance\n");
			
			}
		else
			{
			u[i].bal=u[i].bal-wd;
			printf("Congratulations\nYou have withdwawn %d rupees\nyour current balance=%d",wd,u[i].bal);
			}
		
	}

void deposit()
	{	
		
			
		
			printf("Amount to be deposited\n");
			scanf("%d",&d);	
			u[i].bal=u[i].bal+d;
			printf("Congratulations\nYou have deposited %d rupees\nyour current balance=%d\n",d,u[i].bal);
			
		
	}
void main()
{
	int ch=-1,balance,in;
	db();
	printf("Press 1 for new user\npress 2 for existing user\n");
	scanf("%d",&in);
	if(in==1)
	{
	add_user(10000);
	authenticate();
	
	}
	else if(in==2)
	authenticate();
	if(flag==1)
{
	printf("You are authenticated\n");
while(ch!=4 && flag==1)
	{
	printf("\n\nMENU\n");
	printf("Press 1 for balance check\npress 2 for cash withdwal\npress 3 for cash deposit\npress 4 for exit\n\n\n");
	scanf("%d",&ch);
	switch(ch)
		{
		case 1:
			{
			balance=bal_check();
			printf("Your available balance=%d\n",balance);
			break;
			}
		case 2:
			{
			withdrawl();
			break;
			}
		case 3:
			{
			deposit();
			break;
			}

		}
	}


}
}
