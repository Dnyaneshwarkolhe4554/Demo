#include<stdio.h>
#include<math.h>
table(int x)
{
    int i,b;
    for(i=1; i<=10; i++)
    {
        b=x*i;

        printf("\n%d",b);

    }
}
    main()
    {
        table(15);

        table(56);
    }

