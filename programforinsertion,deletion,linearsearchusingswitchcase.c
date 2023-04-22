#include<stdio.h>
void main()
{
    int i,j,k,l,num,arr[100];
 printf("\t\t\t\t program to perform insertion,deletion and linear search");
 printf("enter the no. of elements of an array");
 scanf("%d",&j);
 for(i=0;i<j;i++)
 {
    printf("enter %d element:"i+1);
    scanf("%d",&arr[i]);
 }   
 printf("enter 1 for insertion \n enter 2 for deletion \n enter 3 for linear search\n");
 printf("enter:");
 scanf("%d",&num);
 switch(num)
 {
    case1;
    //program to do insertion in an array
    {
        int pos,value;
        j++;
printf("enter the position at which you want to insert the element:");
scanf("%d",&pos);
printf("enter the value you want to insert:");
scanf("%d",&value);
for(i=j-1;i>=pos;i--)
arr[i]=arr[i-1];
arr[pos-1]=value;
for(i=0;i<j;i++)
{
    printf("value=%d,arr[i]");
    printf("\n");
}
break;
    }
    case2;
    //program for deletion in an array
    {
        int pos;
    printf("enter the position which you want to delete");
    scanf("%d",&pos);
    j--;
    for(i=pos-1;i<j;i++)
    {
    arr[i]=arr[i+1];
    for(i=0;i<j;i++)
    {
        printf("value=%d",arr[i]);
        printf("\n");
    }    
    break;    
    }
    case3;
       //program for linear search
       {
        int k;
    printf("enter the no you want to find in an array");
    scanf("%d",&k);
    for(i=0;i<j;i++)
    {
        if(k==arr[i])
        {
    printf("element found at %d position and %d index",i+1,i);
    break;        
        }
        else
        continue;
    }
    if(i==j)
    printf("element not found");
    break;
       }
    default;
    printf("you have given invalid command");   
}
 }
 

    }
 }