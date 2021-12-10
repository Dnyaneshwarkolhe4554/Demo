#include<stdio.h>
void main()
{
int i,x,p=0,n=1,b;
printf("Enter the number");
scanf("%d",&x);
printf("%d%d",p,n);
for(i=0;i<=x;i++)
{
   b=p+n;
    printf("%d",b);
   p=n;
   n=b;


}
}

