#include<stdio.h>
int main()
{
    int a[10],i,sum;
    float avg;
    printf("enter 10 numbers");
     for(i=1;i<=9;i++)
    scanf("%d",&a[i]);
  for(i=1;i<=9;i++)
  sum=sum+i;
  avg=sum/10.0;
  printf("avrage is %d",avg);
  return 0;
}