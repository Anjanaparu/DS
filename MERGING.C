#include<stdio.h>
#include<cono.h>
void main()
{
int a[5],b[5],c[10]n,m,k,i;
clrscr();
printf("Enter the size ofthe first array:\n");
scanf("%d"&n);
printf("Enter the elements of first array:\n");
for(i=0;i<n; i++)
{
scanf("%d" &a[i]);
c[i]=a[i];
}
k=i;
printf("Enter the size of second array:\n");
scanf("%d"&m);
printf("Enter the elements:\n");
for(i=0;i<m;i++)
{
scanf("%d"&b[i]);
c[k]=b[i];
k++;
}
printf("Enter the merged array:\n");
for(i=0;i<m+n;i++)
{
printf("%d\n",c[i]);
 }
  getch();
  }

