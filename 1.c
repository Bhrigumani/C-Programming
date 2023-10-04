#include<stdio.h>
int main()
{
  int a,sum;
  print("input a number")
  scanf("%d",&a);
  for(sum=0;a!=0;a=a/10)
        sum=sum*10+10;
  printf("sum=%d\n",sum);
  return1;
}