#include<stdio.h>
#include<stdlib.h>
struct node* Insert_last(char new_data);
void main()
	{
	int l;
	printf("Enter length\n");
	char a;
	scanf("%d",&l);
	for(i=0;i<l;i++)
		{
			scanf(" %c",&a);
			
		}
	}
struct node* Insert_last(char new_data)
{
	struct node *temp;
	
    
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data=new_data;
    
	if(first==NULL)
	{
		new_node->link=NULL;
		
		
		first=new_node;
		
		
		printf("\n\nfirst node created with value %d\n\n",new_data);
		return first;
	} 
	
		

  	 else
		{
			
   			 
  
    			temp=first;
			while(temp->link!=NULL)
				{
					temp=temp->link;
				}
    			temp->link=new_node;
			new_node->link=NULL;
  
   			
			//head=NULL;
    			//first=new_node;
			printf("\n\nNew node added in end with value %d\n\n",new_data);
			return first;
		}
  
   

	
}

