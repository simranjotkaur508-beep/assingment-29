#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("enter 10 numbers");
     for(i=1;i<=10;i++)
    scanf("%d",&a[i]);
  for(i=1,min=0;i<=10;i++)
  {
    if (a[i]<min)
    min=a[i];
    
    
  }
  printf("greater number is %d", min);
  return 0;
}