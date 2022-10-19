#include <stdio.h>
#include <stdlib.h>
#include "matrice.h"
int main()
{
  int i,j,n,m,err;
 double eps,det_a,a[NMAX][NMAX],a1[NMAX][NMAX];
 double b[NMAX][NMAX],c[NMAX][NMAX];
 citire_matrice(&n,&m,a);
 afisare(n,m,a,'A');
 for(i=0; i<n; i++)
 for(j=0; j<n; j++)
 a1[i][j]=a[i][j];
 eps=1.0e-6;
 invers(n,a1,eps,b,&det_a,&err);
 if(err==1) printf("\nMATRICEA A ESTE SINGULARA");
 else
 {
 printf("\nMATRICEA INVERSA B=A^(-1)\n");
 afisare(n,n,b,'B');
 printf("\nDETERMINANTUL MATRICEI A ESTE %8.4f",det_a);
 produs(n,n,n,a,b,c);
 printf("\nVERIFICARE C=A*B REZULTA MATRICEA UNITATE!");
 afisare(n,n,c,'C');
 }
 return 0;
}
