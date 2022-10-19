/* Calculul mediei aritmetice a n numere reale */
#include <stdio.h>
int main()
{
 float a[100], media, suma;
 int i,n;
 printf("\nIntroduceti nr.de elemente n=");
 scanf("%d",&n);
 printf("\nIntroduceti elementele sirului\n");
 for(i=0, suma=0; i<n; ++i)
 {
 printf("a[%2d]=",i);
 scanf( "%f",&a[i]);
 suma+=a[i];
 }
 media=suma/n;
 printf("\nMedia aritmetica=%g\n",media);
 return 0;
}
