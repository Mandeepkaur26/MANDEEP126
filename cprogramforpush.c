#include<stdio.h>
void main()
{
int i,j,stack[100],top;
printf("enter the number of element of stack");
scanf("%d",&top);
for(j=1;j<=top;j++)
{
printf("enter the element:",j);
scanf("%d",&stack[j]);
}
top=top+1;
printf("enter the element you want to insert:");
scanf("%d",&i);
{
  stack[top]=i;
  }
  for(j=1;j<=top;j++)
  {
  printf("value=%d\n",stack[j]);
  }
  }
