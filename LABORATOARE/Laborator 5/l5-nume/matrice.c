#include <stdio.h>
#include <math.h>
#include "matrice.h"
/* Afisarea si citirea unei matrice de n*m elemente de tip double */
void afisare(int n,int m,double a[NMAX][NMAX],char ch)
{
    int i,j;
    printf("\nMATRICEA %c\n",ch);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%8.2f ",a[i][j]);
        printf("\n");
    }
}
void citire_matrice(int *n,int *m,double a[NMAX][NMAX])
{
    int i,j;
    printf("\nIntroduceti nr.linii n=");
    scanf("%d",n);
    printf("\nIntroduceti nr.coloane m=");
    scanf("%d",m);
    printf("\nIntroduceti elementele matricei\n");
    for (i=0; i<*n; i++)
        for(j=0; j<*m; j++)
        {
            printf("a[%d,%d]=",i,j);
            scanf("%lf",&a[i][j]);
        }
    printf("\n");
}
/*Produsul matricelor a[n][m] si b[m][p] de tip double rezultand matricea c[n][p] */
void produs(int n,int m,int p,double a[NMAX][NMAX], double
            b[NMAX][NMAX],double c[NMAX][NMAX])
{
    int i,j,k;
    double s;
    for(i=0; i<n; i++)
        for(j=0; j<p; j++)
        {
            s=0.0;
            for(k=0; k<m; k++)
                s=s+a[i][k]*b[k][j];
            c[i][j]=s;
        };
}
/*Calculul inversei unei matrice si a determinantului atasat */
void invers(int n,double a[NMAX][NMAX],double eps,
            double b[NMAX][NMAX],double *det_a,int *err)
{
    int i,j,k,pozmax;
    double amax,aux;
    /* Initializarea matricei b cu matricea unitate */
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(i==j) b[i][j]=1.0;
            else b[i][j]=0.0;
    /* Initializarea determinantului */
    *det_a=1.0;
    /* Se face 0 sub diagonala principala si 1 pe ea */
    k=0; /*k=nr.liniei */
    *err=0;
    while((k<n) && (*err==0))
    {
        /*Calcul element pivot*/
        amax=fabs(a[k][k]);
        pozmax=k;
        for(i=k+1; i<n; i++)
            if (fabs(a[i][k]) >amax)
            {
                amax=fabs(a[i][k]);
                pozmax=i;
            };
        /*Interschimbarea liniei k cu pozmax in matr. a si b */
        if( k!=pozmax)
        {
            for(j=0; j<n; j++)
            {
                aux=a[k][j];
                a[k][j]=a[pozmax][j];
                a[pozmax][j]=aux;
                aux=b[k][j];
                b[k][j]=b[pozmax][j];
                b[pozmax][j]=aux;
            };
            *det_a=-*det_a;
        };
        if( fabs(a[k][k]) <eps) *err=1;
        else
        {
            *det_a =*det_a*a[k][k];
            aux=a[k][k];
            for(j=0; j<n; j++)
            {
                a[k][j]=a[k][j] / aux;
                b[k][j]=b[k][j] / aux;
            };
            for(i=0; i<n; i++)
                if(i!=k)
                {
                    aux=a[i][k];
                    for(j=0; j<n; j++)
                    {
                        a[i][j]=a[i][j]-a[k][j]*aux;
                        b[i][j]=b[i][j]-b[k][j]*aux;
                    }
                }
        }
        k++;
    }
}
