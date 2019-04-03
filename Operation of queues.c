#include<stdio.h>
void insert();          //to insert the nodes in the queue
void delete();          //to delete the node in the queue by the concept of FIFO
void traverse();        //to access each node of the queue
#define CAPACITY 5
int queue[CAPACITY];
int front=0,rear=0,i;
int main()
{ 	int choice;
	while(1)
	{
		printf("Operations on Queues\n");
		printf("1.Insertion\n");
		printf("2.Deletion\n");
		printf("3.Traversing\n");
		printf("4.Quit");
		
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
	    switch(choice) 
	{
		case 1: insert();
		        break;
		    
		case 2: delete();
                break;
        
		case 3: traverse();
		        break;       
                
        case 4: exit(1);
		        break;
				
		default: 
		{printf("Invalid Choice\n");
   } 
  }
 }
}

void insert()
{   int ele;              // element will be stored in ele
	if(rear==CAPACITY)
	{
		printf("Queue is full\n");
	}
	else
	{	printf("Enter the value:");
	    scanf("%d",&ele);
		queue[rear]=ele;
		rear++;
	}
}

void delete()
{
	if(front==rear)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Deleted element is:%d",queue[front]);
		printf("\n");
		for(i=0;i<rear-1;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
}

void traverse()
{
	if(front==rear)
	{
		printf("queue is empty");
	}
	else 
	{
		printf("Queue elements are:");
		for(i=0;i<=rear-1;i++)
		{
			printf("%d->",queue[i]);
		}
		printf("\n");
	}
}

