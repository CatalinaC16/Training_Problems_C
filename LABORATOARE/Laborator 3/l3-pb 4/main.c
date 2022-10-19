#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define pi 3.14159265

int main()
{
int x;
scanf("%i",&x);
float y=(x*pi)/180;
printf("valoarea in radiani %f\n",y);
printf("sinusul unghiului %f\n",sin(y));
printf("cosinusul unghiului %f\n",cos(y));
printf("tangenta unghiului %f\n",tan(y));
    return 0;
}
