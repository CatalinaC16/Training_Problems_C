#include <stdio.h>
#include <stdlib.h>
/// Să se scrie un program pentru generarea tuturor numerelor prime mai mici sau egale cu un număr natural n.
int main()
{
  int n;
  printf("scrie valoarea lui n=");
  scanf("%d",&n);
  for(int i=2;i<=n;i++)
  {
      int c=0;
      for(int j=2;j<=sqrt(i);j++)
      {
          if(i%j==0)c++;
      }
      if(c==0)printf("%d ",i);
  }
    return 0;
}
