#include <stdio.h>
#define N 5
int main()
{ int a[N],i,temp;
  printf("输入一组数:\n"); 
  for (i=0;i<N;i++)
    scanf("%d",&a[i]);
  printf("array a:\n");
  for (i=0;i<N;i++)
    printf("%4d",a[i]);
  for (i=0;i<N/2;i++)           
    { temp=a[i];
      a[i]=a[N-i-1];
      a[N-i-1]=temp;
     }
  printf("\n排序后的数:\n");
  for (i=0;i<N;i++)
    printf("%4d",a[i]);
  printf("\n");
  return 0;
 }
