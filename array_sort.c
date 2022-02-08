#include<stdio.h>
#include<stdlib.h>
int main()
{
int n1,n2,n3,i;

printf("enter the size of firs arry:\n");
scanf("%d",&n1);
printf("enter the size of second arry:\n");
scanf("%d",&n2);
n3=n1+n2;
printf("enter the first sorted array elements:");
int a[n1],b[n2],c[n3];
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
c[i]=a[i];
}
int k=n1;
printf("enter the second sorted array elements:");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
c[k]=b[i];
k++;
}
printf("\n the merged array elements:\n");
for(i=0;i<n3;i++)
{
printf("%d \n",c[i]);
}
printf("\n the sorted array elements:\n");
for(int i=0;i<n3;i++)
{
int temp;
for(int j=i+1; j<n3 ;j++)
{
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
}
}
for(i=0;i<n3;i++)
{
printf("%d \n",c[i]);
}
return 0;
}
