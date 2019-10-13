#include<stdio.h>
#include<conio.h>
void heapsort(int[],int);
void buildheap(int[],int);
void heapify(int[],int,int);
void main()
{
clrscr();
int k,a[20],n;
printf("\nEnter size of array:");
scanf("%d",&n);
printf("\nEnter elements of an array:");
for(k=1;k<=n;++k)
scanf("%d",&a[k]);
heapsort(a,n);
printf("\nThe sorted array is:");
for(k=1;k<=n;++k)
printf("%d\t",a[k]);
getch();
}
void heapsort(int b1[],int n1)
{
int j,temp;
buildheap(b1,n1);
for(j=n1;j>=1;--j)
{
temp=b1[1];
b1[1]=b1[j];
b1[j]=temp;
heapify(b1,1,j-1);
}
}
//***************************
void buildheap(int b2[],int n2)
{
int j;
for((j=n2/2);j>=1;--j)
{
heapify(b2,j,n2);
}
}
//****************************
void heapify(int b3[],int i,int n3)
{
int temp,max,left,right;
left=(2*i);
right=(2*i)+1;
if((left<=n3)&&(b3[left]>b3[i]))
{
max=left;
}
else
{
max=i;
}
if((right<=n3)&&(b3[right]>b3[max]))
{
max=right;
}
if(i!=max)
{
temp=b3[i];
b3[i]=b3[max];
b3[max]=temp;
heapify(b3,max,n3);
}
}