#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct shop
{
	int srname;
	int price;
	struct shop *next;
};
struct shop *n,*head,*temp,*mid;

void add_begning()
{
	n=(struct shop*)malloc(sizeof(struct shop));
		printf("\nEnter the serial number of item :");
		scanf("%d",&n->srname);
		printf("Enter the price of item :");
		scanf("%d",&n->price);
	n->next=head;
	head=n;

	printf("Serial number : ");
	while(n!=NULL)
	{
		printf("%d\t",n->srname);
		n=n->next;
	}
	n=head;
	printf("\nPrice of item : ");

	while(n!=NULL)
	{
		printf("%d\t",n->price);
		n=n->next;
	}

}

void add_end()
{
 	n=(struct shop*)malloc(sizeof(struct shop));
		printf("\nEnter the serial number of item :");
		scanf("%d",&n->srname);
		printf("Enter the price of item :");
		scanf("%d",&n->price);
	temp->next=n;
	n->next=NULL;
	n=head;
	
	printf("Serial number : ");
	while(n!=NULL)
	{
		printf("%d\t",n->srname);
		n=n->next;
	}
	n=head;
	printf("\nPrice of item : ");

	while(n!=NULL)
	{
		printf("%d\t",n->price);
		n=n->next;
	}

}

void add_middle(int x)
{
	int i;
	n=head;
	mid=(struct shop*)malloc(sizeof(struct shop));
		printf("\nEnter the serial number of item :");
		scanf("%d",&mid->srname);
		printf("Enter the price of item :");
		scanf("%d",&mid->price);

	for(i=1;i<x-1;i++)
		n=n->next;
	mid->next=n->next;
	n->next=mid;
	n=head;
	
	printf("Serial number : ");
	while(n!=NULL)
	{
		printf("%d\t",n->srname);
		n=n->next;
	}
	n=head;
	printf("\nPrice of item : ");

	while(n!=NULL)
	{
		printf("%d\t",n->price);
		n=n->next;
	}

	
}


void delete_begning()
{
 	n=head->next;
	free(head);
	head=n;
	
	printf("Serial number : ");
	while(n!=NULL)
	{
		printf("%d\t",n->srname);
		n=n->next;
	}
	n=head;
	printf("\nPrice of item : ");

	while(n!=NULL)
	{
		printf("%d\t",n->price);
		n=n->next;
	}

}

void delete_end()
{
	n=head;

	while(n->next!=NULL)
	{
		temp=n;
		n=n->next;
	}
	temp->next=NULL;
	free (n);
	n=head;
	printf("Serial number : ");
	while(n!=NULL)
	{
		printf("%d\t",n->srname);
		n=n->next;
	}
	n=head;
	printf("\nPrice of item : ");

	while(n!=NULL)
	{
		printf("%d\t",n->price);
		n=n->next;
	}

	
}


void Delete_Any_Position(int a)
{
	int i;
	n=head;
	for(i=1;i<a;i++)
	{
		temp=n;
		n=n->next;
	}
	temp->next=n->next;
	free (n);
	n=head;
	printf("Serial number : ");
	while(n!=NULL)
	{
		printf("%d\t",n->srname);
		n=n->next;
	}
	n=head;
	printf("\nPrice of item : ");

	while(n!=NULL)
	{
		printf("%d\t",n->price);
		n=n->next;
	}
}

main()
{
	int i,a,num;
	int posi;
	n=(struct shop *)malloc(sizeof(struct shop));
	printf("Enter the serial number of item :");
	scanf("%d",&n->srname);
	printf("Enter the price of item :");
	scanf("%d",&n->price);
	temp=n;
	head=n;
	temp->next=n;
	
	printf("\nEnter the number of list that you want to store :");
	scanf("%d",&a);
	
	for(i=2;i<=a;i++)
	{
		n=(struct shop *)malloc(sizeof (struct shop));
		printf("Enter the serial number of item :");
		scanf("%d",&n->srname);
		printf("Enter the price of item :");
		scanf("%d",&n->price);
		temp->next=n;
		temp=temp->next;
	}
	n->next=NULL;
	n=head;
	printf("Your data are \n\n");
	printf("Serial number : ");
	while(n!=NULL)
	{
		printf("%d\t",n->srname);
		n=n->next;
	}
	n=head;
	printf("\nPrice of item : ");
	
	while(n!=NULL)
	{
		printf("%d\t",n->price);
		n=n->next;
	}
	
	printf("\n\nEnter '1' for add begning :");
	printf("\nEnter '2' for add ending    :");
	printf("\nEnter '3' for add any position    :");
	printf("\nEnter '4' for delete begning:");
	printf("\nEnter '5' for deleter end	  :");
	printf("\nEnter '6' for delete any position :\n");
	scanf("%d",&num);

	switch(num)
	{
		case 1:
			add_begning();
			break;
		case 2:
			add_end();
			break;
		case 3:
			printf("Enter the position of the list :");
			scanf("%d",&posi);
			add_middle(posi);
			break;
		case 4:
			delete_begning();
			break;
		case 5:
			delete_end();
			break;
		case 6:
			printf("Enter the position for deletion :");
			scanf("%d",&posi);
			Delete_Any_Position(posi);
			break;
		default:
		printf("wrong input");
	}
	
}
