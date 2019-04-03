#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
int len;
struct node *root=NULL;
void append(void);          //to add a node at the end of linked list 
void addatbegin(void);     //to add a node at the begin of linked list
void addatafter(void);      //to add a node after a specific node
int length(void);          //to get the length of the linked list
void display(void);        //to display the elements of the linked list
void delete(void);         //to delete the nodes in the linked list

int main()
{   int ch;
	while(1)
	{
		printf("Single Linked List Operations : \n");
		printf("1.Append\n");
		printf("2.Addatbegin\n");
		printf("3.Addatafter\n");
		printf("4.Length\n");
		printf("5.Display\n");
		printf("6.Delete\n");
		printf("7.Quit\n");
		
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : append();
			         break;
			         
		    case 2 : addatbegin();
			         break;
			         
			case 3 : addatafter();
			         break;         
			         
			case 4 : len=length();    //length of the linked list will be store in the 'len' variable
			         printf("\nLength of the list : %d\n",len);
			         printf("\n");
			         break;
					          
			case 5 : display();
			         break;
					          
			case 6 : delete();
			         break;
					          
			case 7 : exit(1);
			default: printf("Invalid Choice\n\n");    
		}
	}
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

int length()
{
	int count=0;
	struct node *temp;
	temp=root;
	while(temp!=NULL)
	{ 
	  count++;
	  temp=temp->link;
	}
	return count;
}

void display()
{
	struct node *temp;
	temp=root;
	if(root==NULL)
	{
		printf("\nNo Nodes in the List");
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

void addatafter()
{
	struct node *temp, *p;
	int loc,len,i=1;
	printf("Enter the location : ");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
	  printf("Invalid location");
	}
	else
	{
	  p=root;
	  while(i<loc)
	{
		p=p->link;
		i++;
		}
		temp=(struct node*)malloc(sizeof(struct node));
		temp->link=p->link;
		p->link=temp;
	}
}

void addatbegin()
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter the node data : ");
  scanf("%d",&temp->data);
  if(root==NULL)
  {root=temp;
	  }	
  else
  {
  	temp->link=root;
  	root=temp;
  }	  
}

void delete()
{
	struct node *temp;
	// the node which is to be deleted is at the location loc
	int loc;
	printf("Enter the location to delete : ");
	scanf("%d",&loc);
	if(loc>length())
	{
		printf("Invalid location");
	}
	else if(loc==1)
	{
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else
	{
		int i=1;
		struct node *p=root,*q;
		while(i<loc-1)
		{p=p->link;
		i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}
