#include <stdio.h>
/* Programul calculeaza minimul dintr-un sir cu termeni intregi */
#define NMAX 100
#define MAXIM 0x7FFFFFFF
int sir[NMAX];
int minim(int x, int y) {
 if (x<=y)
 return x;
 else
 return y;
}
int termen_minim(int dim_sir) {
 if (dim_sir>=0)
 return minim(sir[dim_sir],termen_minim(dim_sir-1));
 else
 return MAXIM;
}
int main()
{
 int i,n;
 printf("Introduceti nr de termeni ai sirului n=");
 scanf("%d",&n);
 printf("Introduceti valorile termenilor\n");
 for(i=0;i<n;++i)
 {
 printf("sir[%d]=",i);
 scanf("%d",&sir[i]);
 }
 printf("\nSIRUL INTRODUS:\n");
 for(i=0;i<n;++i)
 {
 printf("%6d",sir[i]);
 if ((i+1) % 10 == 0) printf("\n");
 }
 printf("\nCel mai mic termen este %d\n",termen_minim(n-1));
 return 0;
}
