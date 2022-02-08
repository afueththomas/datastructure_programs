#include<stdio.h>
#include<stdlib.h>
void intersection();
void Union();
void difference();
int n,m,i,set1[50],set2[50],set3[50],ch,flag=1,j,p;
void main()
{
printf("\n Enter the number of elements of set 1 \n");
scanf("%d",&n);
printf("\n Enter the elements of set 1 \n");
for(i=0;i<n;i++)
{
    scanf("%d",&set1[i]);
}
printf("\n Enter the number of elements of set 2 \n");
scanf("%d",&m);
printf("\n Enter the elements of set 2 \n");
for(i=0;i<m;i++)
{
    scanf("%d",&set2[i]);
}
while(ch!=4)
{
printf("\n-----Select-----\n");
printf("\n 1.Intersection \n 2.Union \n 3.Difference \n");
scanf("%d",&ch);
switch(ch)
{

case 1:
    intersection();
    break;
case 2:
    Union();
    break;
case 3:
    difference();
    break;
default:
    printf("\n ---Invalid---\n");

}
}
}
void intersection()
{
    int k=0;
for(i=0;i<m;i++)
{
flag=1;
for(j=0;j<n;j++)
{
if(set2[i]==set1[j])
{
flag=0;
break;
}
}
if(flag==0)
{
set3[k]=set2[i];
k++;
}
}
p=k;
for(k=0;k <p;k++)

{
printf("%d",set3[k]);

}

}


void Union()
{
    int k=0;
for(i=0;i<n;i++)
{
set3[k]=set1[i];
k++;
}
for(i=0;i<m;i++)
{
flag=1;
for(j=0;j<n;j++)
{
if(set2[i]==set1[j])
{
flag=0;
break;
}
}
if(flag==1)
{
set3[k]=set2[i];
k++;
}
}
p=k;
for(k=0;k <p;k++)

{
printf(" %d",set3[k]);
}



}


void difference()
{
    int k=0;
for(i=0;i<n;i++)
{
flag=1;
for(j=0;j<m;j++)
{
if(set1[i]==set2[j])
{
flag=0;
break;
}
}
if(flag==1)
{
set3[k]=set1[i];
k++;
}
}
p=k;
for(k=0;k <p;k++)

{
printf(" %d",set3[k]);

}

}


