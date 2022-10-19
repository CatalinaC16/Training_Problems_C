#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%i",&n);

  if((n%4==0&& n%100!=0)||(n%400==0)) printf("Anul %i este bisect",n);
   else printf("Anul %i NU este bisect",n);

    return 0;
}
