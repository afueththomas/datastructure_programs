#include<stdio.h>
int i,j,pos,n,a[50],num,num1;
void insert();
void delete();
void search();
void traverse();
void traverse()
{
printf("enter the number of elements");
scanf("%d",&n);
printf("enter elements into an array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the array elements are");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}

}
void insert()
{
printf("\n enter the position to insert an element to array");
scanf("%d",&pos);
printf("enter the element to insert");
scanf("%d",&num);
if(pos>n)
{
    printf("insertion not possible");

}
else
{
for(i=n-1;i>=pos-1;i--)
    {

    a[i+1]=a[i];

    }
    a[pos-1]=num;

n++;
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
void delete()
{
printf("\n enter the position to delete an element to array");
scanf("%d",&pos);
//printf("enter the element to insert");
//scanf("%d",&num);
if(pos>=n)
{
    printf("deletion not possible");

}
else
{
for(i=pos-1;i<n-1;i++)
    {

    a[i]=a[i+1];

    }

//n--;
}
for(i=0;i<n-1;i++)
{
printf("%d",a[i]);
}
}
void search()
{
int flag=0;
    printf("enter the element to search");
    scanf("%d",&num1);
    for(i=0;i<n;i++)
    {
       if(a[i]==num1)
       {
           flag=1;
           break;
       }
    }
       if(flag==1)
       {
        printf("the number found at position %d",i);
       }
       else
       {
           printf("element not found");
       }

}
void main()
{
    do{
    int ch;
    printf("\n 1.traverse,2.insert,3.delete,4.search \n");
    printf("enter your choice");
    scanf("%d",&ch);
switch(ch)
{
    case 1:traverse();
    break;
    case 2:insert();
    break;
    case 3:delete();
    break;
    case 4:search();
    break;
    default:printf("invalid choice");
    break;
}
}while(n!=0);






}
