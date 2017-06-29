#include <stdio.h>
int main()
{
  int i=1,t=0;
  while(i <= 100)
    {
      t = i + t;
      i++;
    }
  printf("%d\n",t);
}


