/* Calculul c.m.m.d.c. si a c.m.m.m.c. a doua numere naturale a si b */
#include <stdio.h>
int main()
{
 int a,b,a1,b1,cmmdc,cmmmc,rest;
 printf("Introduceti a=");
 scanf("%d",&a);
 printf("Introduceti b=");
 scanf("%d",&b);
 /* Aflarea c.m.m.d.c. */
 a1=a;b1=b;
 while ((rest=a1%b1)!=0)
 {
a1=b1;
 b1=rest;
 }
 cmmdc=b1;
 cmmmc=a*b/cmmdc;
 printf("a=%d b=%d cmmdc(a,b)=%d cmmmc=%d", a, b, cmmdc, cmmmc);
 return 0;
 }
