#include <stdio.h>
#include <stdlib.h>

int hermite(int n,int x)
{
    if(n==0)return 1;
    else if(n==1) return 2*x;
    else return 2*n*hermite(n-1,x)-2*(n-1)*hermite(n-2,x);
}
int main()
{
   int n,x;
   scanf("%d%d",&n,&x);
   printf("%d",hermite(n,x));
    return 0;
}
