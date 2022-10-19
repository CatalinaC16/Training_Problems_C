#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   int n;
   scanf("%d",&n);
   ///cel mare pătrat perfect mai mic sau egal cu n
   for(int i=n;i>=1;i--)
   {
       if((int)sqrt(i)*(int)sqrt(i)==i)
        {printf("cel mare patrat perfect mai mic sau egal cu n=%d este %d",n,i);
          break;}
   }
   ///nr prim mai mic decat n
   for(int i=n-1;i>=1;i--)
  {
      int c=0;
      for(int j=2;j<=sqrt(i);j++)
      {
          if(i%j==0)c++;
      }
      if(c==0){printf("\n nr prim mai mic decat n=%d este %d ",n,i);break;}
  }

  ///nr prim mai mare sau egal cu n
  for(int i=n;;i++)
  {
      int c=0;
      for(int j=2;j<=sqrt(i);j++)
      {
          if(i%j==0)c++;
      }
      if(c==0){printf("\n nr prim mai mare sau egal cu n=%d este %d",n,i);break;}
  }
    return 0;
}
