#include <stdio.h>
void main()
{ double sum=0,n=1;
  int i;
  for(i=1;i<=20;i++)
  { n*=i;
    sum+=n;
  }
  printf("%lf",sum);
}
