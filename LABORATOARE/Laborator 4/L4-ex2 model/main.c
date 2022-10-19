#include <stdio.h>
 #include <math.h>
 int main()
 {
 float a,b,c,delta,x1,x2;
 printf("\nIntroduceti a,b,c\n");
 scanf("%f %f %f",&a,&b,&c);
 if (a!=0) {
 delta=b*b-4*a*c;
 if (delta >= 0) {
 x1=(-b-sqrt(delta))/(2*a);
 x2=(-b+sqrt(delta))/(2*a);
 printf("\nEcuatia are radacinile x1=%g si x2=%g\n", x1, x2);
 }
 else {
 x1=-b/(2*a);
 x2=sqrt(-delta)/(2*a);
printf("\nEcuatia are radacinile complex conjugate:\
 x1=%g - j*%g si x2= %g+ j*%g\n",x1,x2,x1,x2);
 }
 }
 else
 printf("\nEcuatia nu este de ordinul 2 (a=0)\n");
 return 0;
 }
