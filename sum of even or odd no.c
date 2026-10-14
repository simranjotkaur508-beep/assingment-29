#include<stdio.h>
int main()
{
    int a[10],i,n,m;
    printf("enter 10 numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=1,n=0,m=0;i<=9;i++)
    {
        if(i%2!=0)
       n=n+a[i];
        else
        m=m+a[i];

    }

    printf("%d\n",n);
     printf("%d\n",m);

    return 0;

    
}