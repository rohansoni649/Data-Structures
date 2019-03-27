#include<stdio.h>
#define CAPACITY 5
void push (int);
int pop (void);
void peek(void);
void traverse(void);
int isFull(void);
int isEmpty(void);
//void exit(void);
int stack[CAPACITY],top=-1,item;
int main()
{   printf("1.Push\n");
    printf("2.Pop\n");
	printf("3.Peep\n");
	printf("4.Traverse\n"); 
	int choice;
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the element:");
			scanf("%d",&item);
			push(item);
			break;
		
		case 2:
		    item=pop();
		    if(item==0)
		    {
		    	printf("Stack is Empty");
			}
		    else 
		    {
		    	printf("\nPopped item is %d",item);
			}
			break;
		case 3:
		     peek();
			 break;			
		case 4:
			 traverse();
		     break;
		//case 5:
		    // exit(0);
		   //  break;
		default:
			 printf("\nInvalid Input");	 
		}
		
	}
        void push(int ele)   
           {
				if(isFull())
				{   
					printf("\nThe stack is full");
				}
				else
				{
					top++;
					stack[top]=ele;
					printf("Entered number is %d",item);
				}
		}
			
			int isFull()
			{
				if(top=CAPACITY-1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
				
			int pop()
			{
				if(isEmpty())
				{
					printf("Stack is Empty");
				}
				else
				{
					return stack[top--];
				}
			}
			int isEmpty()
			{
				if(top=-1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			
			void peek()
			{
				if(isEmpty())
				{
					printf("Stack is Empty");
				}
				else
				{
					printf("Peek element is %d",stack[top]);
				}
			}
			
			void traverse()
			{
				if(isEmpty)
				{
					printf("Stack is Empty");
				}
				else
				{
					int i;
					printf("Stack Elements are:");
					for(i=0;i<top;i++)
					printf("%d\n",stack[i]);
				}
			}
