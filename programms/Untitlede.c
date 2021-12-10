#include<stdio.h>
void main()
{
    int arr1[4],arr2[4];
    int i,sum=0;
    printf("enter array");
    for(i=0; i<4; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("even array");
    for(i=0; i<4; i++)
    {
        if(arr1[i]%2==0)

        {
            printf("\n%d",arr1[i]);
        }
    }
    printf("\nodd array");
    for(i=0; i<4; i++)
    {
        if(arr1[i]%2!=0 )

        {
            printf("\n%d",arr1[i]);
        }
    }
}
