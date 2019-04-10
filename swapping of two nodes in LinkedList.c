#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//#define CAPACITY 5
struct node
{
	int data;
	struct node *link;
};
struct node *root=NULL;
void append(void);
void swap(void);
void display(void);

int main()
{ 
while(1)
  {
    int ch;
    printf("1.Append\n");
    printf("2.Swap\n");
    printf("3.Display\n");
    printf("4.quit\n");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    
    switch(ch)
    {
    	case 1: append();
    	        break;
    	case 2: swap();
		        break;
		case 3: display();
		        break;
		case 4: exit(1);        
		default: printf("Invalid Choice");	exit(0);	        
	}
  }
}

void swap()
{
  int i,loc;
  struct node *p,*q,*r;
  p=root;
  printf("Enter the location:");
  scanf("%d",&loc);
  while(i<loc-2)
  {
  	p=p->link;
  	i++;
  }
  q=p->link;
  r=q->link;
  
  q->link=r->link;
  r->link=q;
  p->link=r;
}

void append()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data : ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)   //list is empty
	{
		root=temp;
	}
	else 
	{
		struct node*p;
		p=root;
		
		while(p->link!=NULL)
		{
			p=p->link;			
		}
		p->link=temp;
	}
}

void display()
{
	struct node *temp;
	temp=root;
	if(root==NULL)
	{
		printf("No Nodes in the List\n\n");
}
		else
		{
			while(temp!=NULL)
			{
				printf("%d->",temp->data);
				temp=temp->link;
			}
		}
		printf("\n\n");
	}

