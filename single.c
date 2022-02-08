#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;
int value;
void insert();
void insertbeg();
void display();
void delete();
void main()
{
    int choice;

    while(choice!=4)
    {
        printf("\n...Options...\n");
        printf("1.Insert\n");
        printf("2.Insert Beggning\n");
        printf("3.Display\n");
        printf("4.Delete\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2:
            insertbeg();
            break;
  case 3:
            display();
            break;
            case 4:
            delete();
            break;

        default:
            printf("Invalid Operation");

        }
    }
}


void insert()
{
    printf ("\n enter the value to be inserted \n");
    scanf("%d",&value);
    newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {

            temp=temp->next;

        }

        temp->next=newnode;
        printf("Data inserted...");
    }
}

void display()
{
    newnode=head;
    printf("\nDisplay Linked List : \n");
    while (newnode!=NULL)
    {
        printf("# %d # ", newnode->data);
        newnode=newnode->next;
    }
}

void delete()
{

    if(head->next==NULL)
    {
      free(head);

    }
    else
    {
        newnode=head;
        newnode->next=head;
        free(newnode);
    }
}

insertbeg()
{

  printf ("\n enter the value to be inserted \n");
    scanf("%d",&value);
    newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {

            temp=temp->next;

        }

        temp->next=newnode;
        printf("Data inserted...");
    }


}
