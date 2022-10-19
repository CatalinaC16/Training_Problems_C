#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,d;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if((float)a/b >(float)c/d) printf("%f",(float)a/b);
   else printf("%f",(float)c/d);
    return 0;
}
