#include <stdio.h>
#include <stdlib.h>
#include "multime.h"
int main()
{
int n,a[NMAX],b[NMAX],m,c[NMAX],p,o;
n=citire(a);
m=citire(b);

printf("intersectia este ");
p=intersectie(a,n,b,m,c);
afisare(c,p);

printf("\n");

printf("reuniunea este ");
o=reuniune(a,n,b,m,c);
afisare (c,o);

printf("\n");

printf("diferenta este ");
o=diferenta(a,n,b,m,c);
afisare (c,o);
    return 0;
}
