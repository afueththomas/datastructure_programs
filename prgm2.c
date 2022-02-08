#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head;
void insert();
void display();
void lastinsert();
void last_delete();
void search();
void main()
{
int choice =0;
    while(choice != 5)
    {
    printf("\n 1.insert \n 2.last insert \n 3.display \n 4.last delete \n 5.Search");
    printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            lastinsert();
            break;
            case 3:
            display();
            break;
            case 4:
            last_delete();
            break;
            case 5:
            search();
            break;
            default:
            printf("Please enter valid choice..");
            }
}
}
void insert()
{
struct node *ptr;
int item;
ptr=(struct node*)malloc(sizeof(struct node*));
printf("enter the value \n");
scanf("%d",&item);
ptr->data=item;
ptr->next=head;
head=ptr;
}
void display()
{
struct node *ptr;
ptr=head;
if(ptr==NULL)
{
printf("\n nothing to print");
}
else
{
printf("\n printing values \n");
while(ptr!=NULL)
{
printf("# %d # ",ptr->data);
ptr=ptr->next;
}
}
}

void lastinsert()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted");

        }
    }
}

void last_delete()
{
    struct node *ptr,*ptr1;
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr ->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last ...\n");
       struct node *ptr;
       ptr=head;
       while(ptr!=NULL)
{
printf("# %d # ",ptr->data);
ptr=ptr->next;
}
    }
    }
}

void search()
{
    struct node *ptr;
    int item,i=0,flag;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        while (ptr!=NULL)
        {
            if(ptr->data == item)
            {
                printf("item found at location %d ",i+1);
                flag=0;
            }
            else
            {
                flag=1;
            }
            i++;
            ptr = ptr -> next;
        }
        if(flag==1)
        {
            printf("Item not found\n");
        }
    }

}
