#include <stdio.h>
#include <stdlib.h>
int Ack(int m,int n)
{
    if(m==0)
    {
        return n+1;

    }
    else if(n==0)return Ack(m-1,1);
         else return Ack(m-1,Ack(m,n-1));
}

int main()
{
  int n,m;
  scanf("%d",&n);
  scanf("%d",&m);
  int p=Ack(m,n);
  printf("%d",p);
    return 0;
}
