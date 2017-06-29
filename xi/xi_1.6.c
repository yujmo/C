#include <stdio.h>
int main()
{
  int a,b,c;
  int max;
  printf("Please input three numbers,and you can get the max one!");
  scanf("%d,%d,%d",&a,&b,&c);
  max=a;
  if(b>a) max=b;
  if(c>b) max=c;
  printf("The max is %d.",max);
  return 0;
}



