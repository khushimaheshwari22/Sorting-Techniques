#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int b=0;
int flag;
int k,j,key;
int a[20],i,size;
printf("\nEnter size of array:");
scanf("%d",&size);
printf("\nEnter elements of array:\n");
for(i=1;i<=size;i++)
{
scanf("%d",&a[i]);
}
//Bubble sorting
for(i=1;i<=size;i++)
{
flag=0;
for(j=2;j<=size;j++)
{
if(a[j-1]>a[j])
{
flag=1;
b=b+1;
key=a[j-1];
a[j-1]=a[j];
a[j]=key;
}
}
if(flag==0)
break;
}
printf("\n*****************************");
printf("\nTHE ARRAY AFTER SORTING IS:\n");
for(i=1;i<=size;i++)
printf("%d\t",a[i]);
printf("\n*****************************");
printf("\nTotal number of iterations performed are:%d",b);
getch();
}