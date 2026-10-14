#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("enter 10 numbers");
     for(i=1;i<=10;i++)
    scanf("%d",&a[i]);
  for(i=1,max=0;i<=10;i++)
  {
    if (a[i]>max)
    max=a[i];
    
    
  }
  printf("greater number is %d", max);
  return 0;
}