#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int k,j,key;
int a[20],i,size;
printf("\nEnter size of array:");
scanf("%d",&size);
printf("\nEnter elements of array:\n");
for(i=1;i<=size;++i)
{
scanf("%d",&a[i]);
}
//Insertion sorting
for(i=2;i<=size;++i)
{
j=i-1;
key=a[i];
while((j>0) && (a[j]>key))
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
printf("\n Array after pass-%d:\n",i-1);
for(k=1;k<=size;++k)
printf("%d\t",a[k]);
}
printf("\n*****************************");
printf("\nTHE ARRAY AFTER SORTING IS:\n");
for(i=1;i<=size;++i)
printf("%d\t",a[i]);
printf("\n*****************************");
getch();
}