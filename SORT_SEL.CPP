#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int j,key,k;
int a[20],i,size;
printf("\nEnter size of array:");
scanf("%d",&size);
printf("\nEnter elements of array:\n");
for(i=0;i<size;++i)
{
scanf("%d",&a[i]);
}
//Selection sorting
for(i=0;i<size;++i)
{
for(j=i+1;j<size;++j)
{
if(a[i]>a[j])
{
key=a[i];
a[i]=a[j];
a[j]=key;
}
}
printf("\n Array after pass-%d:\n",i+1);
for(k=0;k<size;++k)
{
printf("%d\t",a[k]);
}
}
printf("\n*****************************");
printf("\nTHE ARRAY AFTER SORTING IS:\n");
for(i=0;i<size;++i)
printf("%d\t",a[i]);
printf("\n*****************************");
getch();
}
