#include <stdio.h>
int main()
{
  int sign = 1;
  double deno = 2.0,sum = 1.0,term;
  while(deno <= 100)
    {
      sign = -sign;
      sum += sign/deno;
      deno++;
    }
  printf("%f\n",sum);
  return 0;
}


