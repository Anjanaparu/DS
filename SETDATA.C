#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main
{
int set1[30],set2[30],s1,s2,uni[30],inter[30],diff[30],i,ch;
clrscr();
printf("Enter no.of elements in 1st Set:");
scanf("%d",&s1);
printf("Enter elements in 1st Set(only 0s & 1s):");
for(i=0;i<s1;i++)
{
scanf("%d",&set1[i]);
}
printf("\n Enter no.of elements in 2nd set:");
scanf("%d",&s2);
printf("Enter elements in 2nd set(only 0s&1s):");
for(i=0;i<s2;i++)
{
scanf("%d",&set 2[i]);
}
printf("\n 1.UNION");
printf("\n 2.INTERSECTION");
printf("\n 3.DIFFERENCE");
printf("\n 4.EXIT");
while(1)
{
printf("\n Enter choice:");
scanf("%d",&ch);
switch(ch)
{
case 1://UNION
if(s1==s2)
{
printf("\n Elements after Union operation:");
for(i=0;i<s1;i++)
{
uni[1]=set1[i]|set 2[i];
printf("%d",uni[1]);
}
}else
{
printf("Set union not possible as sets are of different size\n");
}
break;
case 2://INTERSECTION
if(s1=s2)
{
printf("\n Elements after Intersection operations:");
for(i=0;i<s1;i++)
{
inter[1]=set1[1]&set2[i];
printf("%d",inter[i]);
}
}
else
{

printf("Set intersection not possible as sets are of different size\n");
}
break;
case 3://DIFFERENCE
if(s1==s2)
{
printf("\nElements after Difference operaions:");
for(i=0;i<s1;i++)
{
diff[1]=set1[i]&~set2[i];
printf("%d",diff[i]);
}
}
else
{
printf("Set difference not possible as sets are of different size\n");
}
break;
case 4:
exit(0);
break;
default:
printf("\n Wrong choice.please select a valid choice");
break;
}}}


