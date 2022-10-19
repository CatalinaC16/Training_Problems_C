#include <stdio.h>
#include <stdlib.h>

#define DIM 3
void citire_matrice(int a[DIM][DIM])
{
    for(int i=0; i<DIM; i++)
    {
        for(int j=0; j<DIM; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]) ;
        }

    }
}
void afisare_matrice(int a[DIM][DIM])
{
    for(int i=0; i<DIM; i++)
    {
        printf("\n");
        for(int j=0; j<DIM; j++)
        {
            printf(" a[%d][%d]=%d",i,j,a[i][j]);

        }

    }
}
void adunare_matrice(int a[DIM][DIM],int b[DIM][DIM],int c[DIM][DIM])
{
    for(int i=0; i<DIM; i++)
    {
        for(int j=0; j<DIM; j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }


    }
}
void inmultire_matrice(int a[DIM][DIM],int b[DIM][DIM],int c[DIM][DIM])
{
    for(int i=0; i<DIM; i++)
    {
        for(int j=0; j<DIM; j++)
        {
            c[i][j]=0;

            for(int k=0; k<DIM; k++)
            {
                c[i][j]=c[i][j] + (a[i][k]*b[k][j]);
            }


        }

    }
}

int c[DIM][DIM];
int main()
{
    int a[DIM][DIM],b[DIM][DIM];
    ///indexarea se face de la 0, daca se face de la 1 nu exista spatiul respectiv in memorie
    printf("citire matrice a \n");
    citire_matrice(a);
    ///afisare_matrice(a);
    printf("citire matrice b \n");
    citire_matrice(b);
    printf("\n");
    /// adunare_matrice(a,b,c);
    ///printf("afisare matrice adunare \n");


    inmultire_matrice(a,b,c);
    afisare_matrice(c);



    return 0;
}
