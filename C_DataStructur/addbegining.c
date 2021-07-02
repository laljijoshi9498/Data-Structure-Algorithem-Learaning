


#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int roll;
	char name[50];
	float mark;
	struct student *next;

}STUDENT;

void add_begining(STUDENT **);
void print(STUDENT *);

main()
{
STUDENT *headptr=0;
char op=0;

do
{
add_begining(&headptr);
printf("enter another node ? y or n\n");
scanf(" %c",&op);

}while(op == 'y' || op == 'Y');

print(headptr);

}

void print(STUDENT *ptr)
{
	if(ptr == 0)
	{
		printf("node not available\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d\t%s\t%f\n",ptr->roll,ptr->name,ptr->mark);
			ptr=ptr->next;
		}
	}
}

void add_begining(STUDENT **ptr)
{
STUDENT *temp=0;

	temp = malloc(sizeof(STUDENT));
	
	printf("enter roll\n");
	scanf("%d",&temp->roll);
	printf("enter name\n");
	scanf("%s",temp->name);
	printf("enter mark\n");
	scanf("%f",&temp->mark);
	
	temp->next = *ptr;
	*ptr = temp;

}
