#include<stdio.h>
#include<stdlib.h>
#define size 20
int item;
void enqueue(int item);
void dequeue();
void display();
int front=-1, rear=-1, i;
int a[size];
void main()
{
int ch;
do
{
printf("\n 1. ENQUEUE\n");
printf("\n 2. DEQUEUE\n");
printf("\n 3. DISPLAY\n");
printf("\n 4. EXIT\n");
printf("\n Enter your choice\n");
scanf("%d",&ch);

switch(ch)
{
case 1: printf("\n Enter the item to insert: \n");
        scanf("%d",&item);
        enqueue(item);
        break;

case 2: dequeue();
        break;

case 3: display();
        break;

case 4: exit(0);

default: printf("\n Invalid Choice\n");
}
}
while(ch!=4);
}
void enqueue(int item)
{
if(rear>=size-1)
printf("\n Queue Overflow\n");
else if(front==-1 && rear==-1)
{
front++;
rear++;
a[rear]=item;
display();
}
else
{
rear++;
a[rear]=item;
display();
}
}
void dequeue()
{
if(front==-1)
printf("\n Queue underflow!\n");
else if(front==0 && rear==0)
{
printf("\n the item %d has been deleted\n",a[front]);
front--;
rear--;
display();
}
else
{
printf("\n the item %d has been deleted\n",a[front]);
front++;
display();
}
}
void display()
{
if(front==-1)
printf("\n Queue has no elements to show\n");
else
{
printf("\n  items in the queue \n");
for(i=front;i<=rear;i++)
printf("%d\t",a[i]);
}
}
