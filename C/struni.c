#include<stdio.h>
#include<string.h>
void main()
	{
		struct student
				{
					int rollno;
					char name[20];
					float cpi;
					int backlog;
				};
		union book	
				{
					char title[50];
					char author[50];
					int price;
					int pages;
				};
		  struct student s1;
		  union book b1;
		   
			s1.rollno=5;
			strcpy(s1.name,"Het");
			s1.cpi=8.75;
			s1.backlog=0;

			printf("Roll no: %d\nName: %s\ncpi: %f\nbacklog: %d\n",s1.rollno,s1.name,s1.cpi,s1.backlog);


			b1.price=250;
			b1.pages=500;
			printf("\n\nPrice: %d\nPages: %d\n",b1.price,b1.pages);
	}
