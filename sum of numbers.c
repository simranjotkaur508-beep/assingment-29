#include<stdio.h>
int main()
{
    int a[10],i,sum;
    printf("enter 10 numbers");
     for(i=1;i<=9;i++)
    scanf("%d",&a[i]);
  for(i=1;i<=9;i++)
  sum=sum+i;
  printf("sum is %d", sum);
  return 0;
}