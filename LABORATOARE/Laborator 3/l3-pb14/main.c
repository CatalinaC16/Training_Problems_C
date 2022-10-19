#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define pi 3.1415926
int main()
{
  float c1,c2,x,y;
  printf("introduceti coordonetele ");
  scanf("%f %f",&c1,&c2);

 c2=c2*(pi/180.0);
 x=c1*cos(c2);
 y=c1*sin(c2);
 printf("%f %f",x,y);
      return 0;
}
