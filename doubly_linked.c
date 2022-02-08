    #include<stdio.h>
    #include<stdlib.h>
    struct node
    {
    int data;
    struct node *next;
    struct node *prev;

    };

    struct node *head;
    void insert();
    void delete();
    void display();
    void search();

    void main()
    {
    int choice;
    while(1)
    {
    printf("\n1.Insert \n2.Delete \n3.Diaplay \n4.Search\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    insert();
    break;
    case 2:
    delete();
    break;
    case 3:
    display();
    break;
    case 4:
    search();
    break;
    default:
    printf("\n Invalid Operation");
    }
    }
    }

    void insert()
    {
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the values\n");
    scanf("%d",&item);

    if(head==NULL)
   {
       ptr->next = NULL;
       ptr->prev=NULL;
       ptr->data=item;
       head=ptr;
   }
   else
   {
       ptr->data=item;
       ptr->prev=NULL;
       ptr->next = head;
       head->prev=ptr;
       head=ptr;

    }
    }

    void delete()
    {
        struct node *ptr;
    if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        ptr = head;
        head = head -> next;
        head -> prev = NULL;
        free(ptr);
        printf("\nnode deleted\n");
    }


    }
    void display()
    {
struct node *ptr;
    printf("\n printing values...\n");
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
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
                printf("\nitem found at location %d ",i+1);
                flag=0;
                break;
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
            printf("\nItem not found\n");
        }
    }


    }

