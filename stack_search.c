#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}
*top = NULL;

void push(int);
void pop();
void display();
void search();

void main()
{
int choice, value,element;
while(1)
{
printf("\n1. Push\n2. Pop\n3. Display\n4. Search\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the value to be insert: ");
scanf("%d", &value);
push(value);
break;
case 2:
pop();
 break;
case 3:
 display();
break;
case 4:
 search();
break;
default:
printf("\nchoose a valid option\n");
}
}
}
void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
   printf("\n value inserted\n");
}
void pop()
{
   if(top == NULL)
   {
      printf("\nStack is Empty\n");
      }
   else
   {
      struct Node *temp = top;
      printf("\nDeleted element: %d", temp->data);
      top = temp->next;
      free(temp);
   }
}
void display()
{
  if(top == NULL)
  {
      printf("\nStack is Empty\n");
     }
   else
   {
      struct Node *temp = top;
      while(temp->next != NULL)
      {
	 printf("%d",temp->data);
	 temp = temp -> next;
      }
      printf("%d",temp->data);
   }
}

void search()
{
    int item,i=0,flag;
    if(top == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        while (top!=NULL)
        {
            if(top->data == item)
            {
                printf("item found at location %d ",i+1);
                flag=0;
            }
            else
            {
                flag=1;
            }
            i++;
            top = top -> next;
        }
        if(flag==1)
        {
            printf("Item not found\n");
        }
    }
}
