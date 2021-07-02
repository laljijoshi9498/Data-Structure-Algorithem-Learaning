


#include<stdio.h>
#include<stdlib.h>
typedef struct std
{
	int roll;
	char name[50];
	float mark; 
	struct std *next;
}STD;

void add_end(STD **);

main()
{
STD *headptr=0;
char op=0;

do
{

add_end(&headptr);
printf("add node ? y n\n");
scanf(" %c",&op);

}while(op == 'y' || op == 'Y');


}



void add_end(STD **ptr)
{
STD *temp=0,*temp2=0;

	temp = malloc(sizeof(STD));

	printf("enter data\n");
	scanf("%d",&temp->roll);
	scanf("%s",temp->name);
	scanf("%f",&temp->mark);

	
	if(*ptr == 0)
	{
		temp->next = 0;
		*ptr = temp;
	}
	else
	{
		temp2 = *ptr;	
		while(temp2->next)
		temp2 = temp2->next;

		temp2->next = temp;
		temp->next = 0;			
		
	}

}
