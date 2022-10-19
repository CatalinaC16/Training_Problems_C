#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x ,y;
   scanf("%f",&x);
   /*if(x<-2)printf("%f",x*x+4*x+4);
     else if(x==-2)printf("0");
         else printf("%f",x*x+5*x);*/

 /// sau varianta prescurtata y=x-2? scrie x*x+4*x+4: x=-2;

 y=x<-2? printf("%f",x*x+4*x+4): x==-2? printf("0"):printf("%f",x*x+5*x) ;

    return 0;
}
