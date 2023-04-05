#include<stdio.h>
int main()
{

    int i,j,k,arr[100];
    printf("enter the no of elements of an array:");
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the number you want to find in the array:");
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
        printf("element not found ");
    return 0;
}
