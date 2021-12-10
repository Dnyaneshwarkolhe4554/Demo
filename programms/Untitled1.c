#include<stdio.h>
void main()
{
int arr[4];
int i,sum=0;
printf("enter array");
for(i=0; i<4;i++)
{
scanf("%d",&arr[i]);
}
printf("sum of aaray element");
for(i=0;i<4;i++)
{
    sum=sum+arr[i];
}
printf("%d",sum);
}

